import yt_dlp

def download_video(url, output_path='.'):
    ydl_opts = {
        'format': 'bestvideo+bestaudio/best',  # highest quality video+audio, merged
        'outtmpl': f'{output_path}/%(title)s.%(ext)s',
        'merge_output_format': 'mp4',  # ensures final file is mp4
    }
    
    with yt_dlp.YoutubeDL(ydl_opts) as ydl:
        info = ydl.extract_info(url, download=True)
        print(f"Downloaded: {info.get('title')}")

if __name__ == "__main__":
    video_url = input("Enter YouTube video URL: ")
    download_video(video_url)