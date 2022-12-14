#include "use_lib.h"
#include "solution.h"
using namespace std;

int main() {
    setlocaleRus();

    /**
     * В начале инициализируются 6 пловцов, с именами и скоростью
     * Далее конструктор инициализирует пул участников для соревнования
     * Дистанция соревнования установлена по умолчанию 25м, меньше ждать
     * Скорости пловцов установлены практически максимально возможные
     * В реализацию внесена случайная возможность допуска ошибки пловца
     * При ошибке случайное число откатывает пловца назад до полуметра
     * таким образом можно реализовать гарантировано разный финиш в
     * каждом заплыве. Запустите и болейте за спорт на здоровье
     */
    solution_1();

    /**
     * Внимание: парк транспортных средств заправлен и готов к работе
     * Задание №2 немного модифицировано но не упрощено, прошу простить и понять ))
     * Вместо паровозиков в задании участвуют самолеты, взлетающие со своих баз дислокации
     * Каждый самолет имеет время полета и время стоянки в аэропорту назначения - аэропорт ЦЕНТР
     * Подлетая к аэропорту ЦЕНТР, командир корабля запрашивает разрешение на посадку, если полоса
     * свободна, разрешение выдается, самолет совершает посадку, выполняет разгрузку, просит разрешение
     * на взлет и улетает на базу. В это время, другие самолеты, ожидают разрешения на посадку в порядке
     * живой очереди, получают, совершают посадку, разгружаются и также вылетают назад на свои базы.
     * Вы можете указать единственный параметр n_routes для задания - сколько рейсов каждый самолёт
     * должен совершить в ЦЕНТР и вернуться назад. По умолчанию = 1. Пристегнитесь и вперед.
     */
    solution_2(1);

    /**
     * Задание №3
     * Кухня имеет 5 блюд доступных для заказа в службе доставки еды
     * Заказы поступают с частотой распределения dist_wait, от 2 до 4 секунд (можно изменить)
     * Время приготовления каждого заказа берем из распределения dist_time, от 5 до 9 секунд на заказ
     * Время необходимое чтобы курьер забрал готовый заказ с кухни равен времени приготовления заказа
     * Запускаем программу и ждем пока курьер не заберет 10 готовых заказов с кухни
     */
    solution_3();


    return 0;
}
