import os
import sys

# Fix for Apple Silicon Macs (M1/M2/M3/M4/M5)
homebrew_prefix = "/opt/homebrew"
if not os.path.exists(homebrew_prefix):
    homebrew_prefix = "/usr/local" # Intel Macs

# Add hidapi lib to the dynamic loader path
lib_path = os.path.join(homebrew_prefix, "lib")
if 'DYLD_LIBRARY_PATH' not in os.environ:
    os.environ['DYLD_LIBRARY_PATH'] = lib_path
else:
    os.environ['DYLD_LIBRARY_PATH'] = f"{lib_path}:{os.environ['DYLD_LIBRARY_PATH']}"

# Now import pybooklid
from pybooklid import read_lid_angle

try:
    angle = read_lid_angle()
    if angle is not None:
        print(f"Lid is at {angle:.1f}°")
    else:
        print("Sensor not available or returned None.")
except Exception as e:
    print(f"Error: {e}")
    print("Try running with: sudo python3 your_script.py")   
from pybooklid import read_lid_angle
angle = read_lid_angle()
print(f"Lid is at {angle}°")   