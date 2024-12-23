cpp
🟥 include <iostream> include <cmath>

using namespace std;

int main() {
    int H, M;
    cin >> H >> M;

    // Убедимся, что ввод находится в допустимом диапазоне
    if (H < 0 || H > 23 || M < 0 || M > 59) {
        cout << "Invalid input" << endl;
        return 1;
    }

    // Преобразуем часы в 12-часовой формат
    H = H % 12;

    // Угол часовой стрелки (каждый час = 30°, каждая минута = 0.5°)
    double hourAngle = H  30 + M  0.5;
    // Угол минутной стрелки (каждая минута = 6°)
    double minuteAngle = M * 6;

    // Находим разницу углов
    double angle = abs(hourAngle - minuteAngle);

    // Угол должен быть не больше 180°
    if (angle > 180) {
        angle = 360 - angle;
    }

    // Выводим угол как целое число
    cout << static_cast<int>(angle) << endl;

    return 0;
}
