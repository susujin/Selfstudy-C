#include <stdio.h>

enum MasterYiSkill {
	AlphaStrike=1,
	Meditation,
	WujuStyle,
	Hightlander
};

int main()
{
	enum MasterYiSkill skill;
	skill = Meditation;

	switch (skill)
	{
	case AlphaStrike:
		printf("�ϰ��ʻ�\n");
		break;
	case Meditation:
		printf("���\n");
		break;
	case WujuStyle:
		printf("���ַ� �˼�\n");
		break;
	case Hightlander:
		printf("������ ����\n");
		break;
	default:
		break;
	}
	return 0;
}