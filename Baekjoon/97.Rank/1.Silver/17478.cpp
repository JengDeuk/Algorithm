#include <iostream>
using namespace std;

void Indent(int IndNum)
{
	for (int i = 0; i < IndNum; ++i)
	{
		cout << "____";
	}
}

void QnA(int CurNum, int IndNum)
{
	Indent(IndNum);
	cout << "\"����Լ��� ������?\"\n";

	if (CurNum == 0)
	{
		Indent(IndNum);
		cout << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n";

		Indent(IndNum);
		cout << "��� �亯�Ͽ���.\n";
		return;
	}
	else
	{
		Indent(IndNum);
		cout << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n";

		Indent(IndNum);
		cout << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n";

		Indent(IndNum);
		cout << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n";
	}

	QnA(CurNum - 1, IndNum + 1);

	Indent(IndNum);
	cout << "��� �亯�Ͽ���.\n";
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int N;
	cin >> N;

	cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n";
	QnA(N, 0);
}