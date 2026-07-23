while ($true) {
    Set-Location "C:\Users\Nischal\Desktop\c++ folder"

    git add .

    $status = git status --porcelain

    if ($status) {
        $time = Get-Date -Format "yyyy-MM-dd HH:mm:ss"
        git commit -m "Auto update $time"
        git push origin main
        Write-Host "Pushed at $time"
    }

    Start-Sleep -Seconds 10
}