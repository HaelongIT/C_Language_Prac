#include <stdio.h>

void swap(int a, int b);

void swap_addr(int *a, int *b);

changeArray(int *ptr);

int main(void)
{
    // printf("Hello World\n");

    // ##########ģ������ �ּ�

    // ������

    // [ö��] : 101ȣ -> �޸� ������ �ּ�(6422036)
    // [����] : 201ȣ -> �޸� ������ �ּ�(6422040)
    // [�μ�] : 301ȣ -> �޸� ������ �ּ�(6422036)
    // �ּҴ� ��Ȯ���� '�޸��� �ּҰ�'��

    // ���� �� �տ� '��ȣ'�� �ɷ� ����
    // ��ȣ�� '�޸𸮿� ����� ��(value)'��
    // int Cs = 1;
    // ö���� ��ȣ : 1
    // int Yh = 2;
    // ������ ��ȣ : 2
    // int Ms = 3;
    // �μ��� ��ȣ : 3

    // printf("(�Ϲݺ����� �̿��ؼ� �ּҿ� ���� ���)\n");

    // printf("ö���� �ּ�[������ �޸� �ּ�] : %d, ��ȣ[������ ��] : %d\n", &Cs, Cs);
    // printf("����� �ּ� : %d, ��ȣ : %d\n", &Yh, Yh);
    // printf("�μ��� �ּ� : %d, ��ȣ : %d\n\n", &Ms, Ms);

    // ############�̼Ǹ�(������)�� ����

    // �̼Ǹ� !

    // printf("\n ... �̼Ǹ��� �̼� �����ϴ� �� ... \n\n");
    // printf("(�����ͺ����� �̿��ؼ� �ּҿ� ���� ���)\n");

    // �̼Ǹ��� ù ��° �̼� : ����Ʈ�� �� ���� �湮�Ͽ� ���� ���� ��ȣ Ȯ��

    // int * XMan;
    // ������ ���� ����

    // XMan = &Cs;
    // '������ ����'�� 'Ư�� ������ �޸� �ּ�'�� ������
    // printf("�̼Ǹ��� �湮�ϴ� �� �ּ�[������ �޸� �ּ�] : %d, ��ȣ[������ ��] : %d\n", XMan, *XMan);

    // XMan = &Yh;
    // printf("�̼Ǹ��� �湮�ϴ� �� �ּ� : %d, ��ȣ : %d\n", XMan, *XMan);

    // XMan = &Ms;
    // printf("�̼Ǹ��� �湮�ϴ� �� �ּ� : %d, ��ȣ : %d\n\n", XMan, *XMan);

    // �̼Ǹ��� �� ��° �̼� : �� ��ȣ�� 3�� ���ض�

    // printf("(�����ͺ����� �̿��ؼ� ���� ����)\n");

    // XMan = &Cs;
    // *XMan = *XMan * 3;
    // '�����ͺ���'�� '*�����ͺ���'�� �̿��ؼ� ��(value)�� ���ٰ���

    // printf("�̼Ǹ��� ��ȣ�� �ٲ� �� �ּ�[������ �޸� �ּ�] : %d, ��ȣ[������ ��] : %d\n", XMan, *XMan);

    // XMan = &Yh;
    // *XMan = *XMan * 3;
    // printf("�̼Ǹ��� ��ȣ�� �ٲ� �� �ּ� : %d, ��ȣ : %d\n", XMan, *XMan);

    // XMan = &Ms;
    // *XMan = *XMan * 3;
    // printf("�̼Ǹ��� ��ȣ�� �ٲ� �� �ּ� : %d, ��ȣ : %d\n", XMan, *XMan);

    // ############������(�Ǵٸ� ������)�� ����
    // ������
    // �������� �̼� : �̼Ǹ��� �ٲ� ��ȣ���� 2�� ����!

    // int * Spy = XMan;
    // ������(Spy)
    //              =>   �������� ����Ʈ �ּ�(Ư�� ������ �޸� �ּ�)
    // �̼Ǹ�(XMan)

    // ���� �� ���� ���� �ٸ� '������ ����'(Spy�� XMan)��
    // ���� '���� Ư�� ������ �޸� �ּ�'�� ����Ű�� ����

    // printf("\n ... �����̰� �̼� �����ϴ� �� ... \n\n");
    // printf("(�����ͺ����� �̿��ؼ� ���� ����)\n");

    // Spy = &Cs;
    // '������ ����'�� 'Ư�� ������ �ּҰ�' ����

    // *Spy = *Spy - 2;
    // '*�����ͺ���'�� �̿��ؼ� 'Ư�������� ��(value)'�� ����
    // 'Cs = Cs - 2;'�� ������ ������

    // printf("�����̰� �湮�ϴ� �� �ּ�[������ �޸� �ּ�] : %d, ��ȣ[������ ��] : %d\n", Spy, *Spy);

    // Spy = &Yh;
    // *Spy = *Spy - 2;
    // printf("�����̰� �湮�ϴ� �� �ּ� : %d, ��ȣ : %d\n", Spy, *Spy);

    // Spy = &Ms;
    // *Spy = *Spy - 2;
    // printf("�����̰� �湮�ϴ� �� �ּ� : %d, ��ȣ : %d\n", Spy, *Spy);

    // printf("\n ... ö�� ���� �μ��� ���� �������� �ٲ� ��ȣ�� ���� ���� ...\n\n");
    // printf("(�Ϲݺ����� ��[value]�� ����ƴ��� Ȯ��)\n");
    // '�����ͺ���'�� '*�����ͺ���'�� �̿��ؼ� 'Ư�������� ��(value)'�� �����ߴµ�
    // '�Ϲݺ���'�� ����ؼ� ������ 'Ư�������� ��(value)'�� ������ �ƴ��� Ȯ���ϱ�

    // printf("ö���� �ּ�[������ �޸� �ּ�] : %d, ��ȣ[������ ��] : %d\n", &Cs, Cs);
    // printf("����� �ּ� : %d, ��ȣ : %d\n", &Yh, Yh);
    // printf("�μ��� �ּ� : %d, ��ȣ : %d\n\n", &Ms, Ms);

    // ������.. �̼Ǹ��� ��� ���� �ּҴ� '&XMan'���� Ȯ�� ����
    // ('�����ͺ���'�� �޸��ּҵ� '&�����ͺ���'�� Ȯ�� ����)

    // printf("\n(�����ͺ����� �ּҰ��� Ȯ��)\n");

    // printf("�̼Ǹ��� �ּ� : %d\n", &XMan);
    // printf("�������� �ּ� : %d\n", &Spy);

    // #############�迭�� �������� ����

    // �迭 ?
    // �迭�� �����Ϳ� ���� ������ ������ ����

    // int arr[3] = {5, 10, 15};
    // int * ptr = arr;
    // '�����ͺ���'(ptr)���� �׻� 'Ư�������� �ּҰ�'(arr) ������
    // arr == (arr + 0) == &arr[0] : �迭 arr�� ù��° �ּҰ�(arr[0]�� �ּҰ�)

    // for(int i = 0; i < 3; i++) {
    //     printf("�迭 arr[%d]�� �� : %d\n", i, arr[i]);
    // }

    // for(int i = 0; i < 3; i++) {
    //     printf("������ ptr[%d]�� �� : %d\n", i, ptr[i]);
    // }
    // '�����ͺ���'�� '�����ͺ���[i]'�� �̿��ؼ� '�����ͺ���'�� �����
    // 'Ư�������� �ּҰ�'���� i��ŭ �Ÿ��� �ִ� '��'(value)�� ������ ������
    // (cf. '�����ͺ���'�� '*�����ͺ���'�� 'Ư�������� ��'(value)�� ������ ������)

    // printf("\n");

    // ptr[0] = 100;
    // ptr[1] = 200;
    // ptr[2] = 300;
    // '�����ͺ���[i]'�� �̿��ؼ� '�����ͺ���'�� �����
    // 'Ư�������� �ּҰ����� i��ŭ �Ÿ��� �ִ� ��'(value)�� �����ϸ�
    // ���� '�迭�� ��'(value)�� ����Ǵ� ���� ������� Ȯ�� ����

    // for(int i = 0; i < 3; i++) {
    //     // printf("�迭 arr[%d]�� �� : %d\n", i, arr[i]);
    //     printf("�迭 arr[%d]�� �� : %d\n", i, *(arr + i));
    // }

    // for(int i = 0; i < 3; i++) {
    //     // printf("������ ptr[%d]�� �� : %d\n", i, ptr[i]);
    //     printf("������ ptr[%d]�� �� : %d\n", i, *(ptr + i));
    // }

    // *(arr + i) == arr[i]
    // ���� ���� �Ȱ��� ǥ����

    // arr�� �ᱹ 'Ư�� �ּҰ�[arr �迭�� ù��° ���� �ּ�]'�� �ǹ��ϱ� ������
    // '*(arr + i)'�� '*(Ư�� �ּҰ�+i)'�� Ư�� �ּҰ����� i��ŭ ������ �ּҰ��� ������
    // ������ ��(value)�� �ǹ���
    // 'arr[i]'�� �ش� �迭(arr)���� i��°�� �ش�Ǵ� ��(value)�� �ǹ���
    // ��������� '*(arr + i)'�� 'arr[i]'�� ���� �ǹ���

    // printf("\n");

    // arr == &arr[0] : arr �迭�� ù��° ���� �ּ�
    // printf("arr ��ü�� �� : %d\n", arr);
    // printf("arr[0]�� �ּ� : %d\n", &arr[0]);

    // printf("\n");

    // printf("arr ��ü�� ��(�ּҰ�)�� ���� ��(value) : %d\n", *arr);
    // *arr == *(arr + 0)

    // printf("arr[0] �ּ�(&arr[0])�� ���� �� : %d\n", *&arr[0]);

    // printf("\n");

    // *& �� �ƹ��͵� ���� �Ͱ� ����
    // & �� �ּ��̸� * �� �� �ּ��� ��(value)�̱� ������
    // *& �� ���� ����
    // printf("arr[0] �ּ��� ���� �� : %d\n", *&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&arr[0]);
    // printf("arr[0] �ּ��� ���� �� : %d\n", arr[0]);

    // ################### Swap

    // SWAP
    // int a = 10;
    // int b = 20;

    // ���� ���� ���� (Call by Value) -> ���� �����Ѵٴ� �ǹ�
    // swap() �Լ������� a�� b�� ��(value)�� �Ű������� �־��� ����
    // (�Ű������� a�� b ��ü�� ������ ���� �ƴ�)
    // (swap()�Լ��� �ִ� ���� a, b�� �����Լ��� �ִ� ���� a, b�� ���� �ٸ� �޸� �ּҸ�
    // ���� �ٸ� ������)

    // printf("-----Call by Value-----\n");

    // printf("a�� �ּ� : %d\n", &a);
    // printf("b�� �ּ� : %d\n", &b);

    // a�� b�� ���� �ٲ۴�
    // printf("Swap �Լ� �� => a : %d, b : %d\n\n", a, b);
    // swap(a, b);
    // printf("Swap �Լ� �� => a : %d, b : %d\n", a, b);
    // �и��� swap() �Լ������� a�� b�� �ٲ���µ� �����Լ������� �ٲ��� ����

    // printf("\n");

    // ������ ���� ȣ�� (Call by Reference) -> �ּҰ��� �����Ѵٴ� �ǹ�
    // �ּҰ��� �ѱ��? �޸� ������ �ִ� �ּҰ� ��ü�� �ѱ�� -> ö����(Cs)ó��
    // (�Ű������� a�� b ��ü�� ������)

    // printf("-----Call by Reference-----\n");

    // printf("a�� �ּ� : %d\n", &a);
    // printf("b�� �ּ� : %d\n", &b);

    // printf("(�ּҰ� ����) Swap �Լ� �� => a : %d, b : %d\n\n", a, b);

    // swap_addr(&a, &b);
    // �Ű������� a�� b�� �ּҵ��� ������

    // printf("(�ּҰ� ����) Swap �Լ� �� => a : %d, b : %d\n", a, b);

    // ###############�����ͷ� �迭 �� �����ϱ�

    // �迭�� ����, arr2 -> �ּҰ�
    // ('arr2'�� 'arr2 �迭�� ù��° ���� �ּ�' : arr2 == &arr2[0])
    int arr2[3] = {10, 20, 30};

    // arr2[3]�� 50���� �ٲٰ� ����
    // changeArray(arr2);
    changeArray(&arr2[0]);
    // �Լ� ������ �迭�� '��'(value)�� �ٲٰ� �����Լ��� �ݿ��ϰ� �ʹٸ�
    // Call by Reference�� '�ּҰ�'(arr2�� &arr2[0])�� �Ű������� ������
    // '�����ͺ���'�� ������ ��
    // (������ �Լ��� ���ؼ� arr2[3]�� 50���� �ٲ�)

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", arr2[i]);
    }

    // scanf_s()���� &num�� ���� &�� ����ϴ� ������ �����ϱ�?

    return 0;
}

void swap(int a, int b)
{

    printf("(Swap �Լ� ��) a�� �ּ� : %d\n", &a);
    printf("(Swap �Լ� ��) b�� �ּ� : %d\n", &b);

    int temp = a;
    // ���� a�� ���� temp�� ����

    a = b;
    // ���� b�� ���� a�� ����

    b = temp;
    // ���� a�� ���� b�� ����

    printf("Swap �Լ� �� => a : %d, b : %d\n\n", a, b);
    // �и��� swap() �Լ������� a�� b�� �ٲ���µ� �����Լ������� �ٲ��� ����
}

void swap_addr(int *a, int *b)
{
    // �Ű������� '�ּҰ�'�� �ޱ� ���ؼ��� '�����ͺ���'�� �ʿ���

    printf("(Swap_addr �Լ� ��) a�� �ּ� : %d\n", a);
    printf("(Swap_addr �Լ� ��) b�� �ּ� : %d\n", b);
    // �Ű������� '�����ͺ���'�� '�ּҰ�'�� �޾ұ� ������
    // a�� b�� ���� �ּҰ��� ���ϴ� '�����ͺ���'��

    int temp = *a;
    *a = *b;
    *b = temp;
    // a�� b�� �ּҰ��� ���ϴ� '�����ͺ���'�̱� ������
    // a�� b�� ��(value)�� swap�ϱ� ���ؼ��� '*�����ͺ���'�� ����ؾ�
    // ��(value)�� ������ �� ����

    printf("(�ּҰ� ����) Swap �Լ� �� => a : %d, b : %d\n\n", *a, *b);
    // ���� �����ϱ� ���ؼ� *a�� *b�� �����
    // swap_addr() �Լ����� a�� b�� �ٲ��� �����Լ������� �ٲ�
}

changeArray(int *ptr)
{
    // �Ű������� '�ּҰ�'(arr2)�� ���±� ������ '�����ͺ���'(ptr)�� ����

    ptr[2] = 50;
    // ptr[i]�� �̿��ؼ� '��'(value)�� ������
}