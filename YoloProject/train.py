from ultralytics import YOLO

if __name__ == '__main__':
    model=YOLO(r"yolo11n.pt")
    model.train(
        data='data.yaml',
        epochs=50,
        patience=10,
        imgsz=640,
        batch=8,
        device=0
    )






