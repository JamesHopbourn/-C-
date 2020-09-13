#include <stdio.h>

int main(int argc, char const *argv[]) {
  float chinese, math, english, avg;
  printf("请依次输入语数英三门科目的成绩，以空格分隔：");
  scanf("%f %f %f", &chinese, &math, &english);
  // 检查分数输入是否有误
  if (chinese > 100 || math > 100 || english > 100) {
    printf("成绩输入有误，请重新输入！\n");
  }
  avg = (chinese + math + english) / 3;

  // 下面开始使用 if 语句进行判断得奖等级
  if (avg > 95 || (chinese == 100 && math == 100 && english > 80) ||
      (chinese == 100 && english == 100 && math > 80) ||
      (math == 100 && english == 100 && chinese > 80)) {
    printf("🥇 一等奖\n");
  } else if (avg > 90 || (chinese == 100 && (math + english) / 2 > 75) ||
             (math == 100 && (chinese + english) / 2 > 75) ||
             (english == 100 && (chinese + math) / 2 > 75)) {
    printf("🥈 二等奖\n");
  } else if (chinese > 70 && math > 70 && english > 70) {
    printf("🥉 三等奖\n");
  } else {
    printf("😣 很遗憾，你没有评上任何奖，加油再接再厉！\n");
  }
  return 0;
}