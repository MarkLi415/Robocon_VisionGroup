from ultralytics import YOLO

if __name__ == '__main__':
    model = YOLO('runs/detect/train3/weights/best.pt')

    results = model.predict(source='data/images/test',save=True,device=0)









