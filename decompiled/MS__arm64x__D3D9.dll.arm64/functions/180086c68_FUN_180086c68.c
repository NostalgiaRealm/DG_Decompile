/*
 * FUN_180086c68 at 180086c68
 * undefined FUN_180086c68(void)
 * Address ranges: 180086c68-180086dcf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180086c68(longlong param_1,uint param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  float fVar7;
  
  uVar6 = (ulonglong)(param_2 + *(int *)(param_1 + 0x3c) * param_3);
  if (*(int *)(param_1 + 0x2c) == 0) {
    FUN_180082250(*(undefined8 *)(param_1 + 0x110),2,*(undefined8 *)(param_1 + 0x10));
  }
  uVar1 = *(uint *)(param_1 + 0x2c);
  uVar5 = 0x16;
  if (uVar1 != 0) {
    uVar5 = 6;
    if (*(char *)(param_1 + 0x248) == '\0') {
      uVar5 = *(uint *)(&DAT_180231550 + (ulonglong)uVar1 * 4);
    }
    uVar5 = uVar5 & 0xf | (*(uint *)(&DAT_180231770 + (ulonglong)uVar1 * 4) & 7 | 0xf8000020) << 4;
  }
  lVar2 = *(longlong *)(param_1 + 0x140);
  if (lVar2 == 0) {
    lVar2 = FUN_180086520(param_1,0);
  }
  fVar7 = (float)(uint)(1 << (ulonglong)(param_2 & 0x1f));
  if (*(longlong *)(param_1 + 0x1d8) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x1f0) + uVar6 * 0x28);
  }
  lVar3 = *(longlong *)(param_1 + 0x80);
  if (lVar3 == 0) {
    lVar3 = *(longlong *)(param_1 + 0x78);
  }
  FUN_1800825d8(0,0,(float)*(uint *)(param_1 + 0x24) / fVar7,
                (float)*(uint *)(param_1 + 0x28) / fVar7,0,0,
                (float)*(uint *)(param_1 + 0x170) / fVar7,(float)*(uint *)(param_1 + 0x174) / fVar7,
                *(undefined8 *)(param_1 + 0x110),*(undefined4 *)(param_1 + 0x2c),
                *(undefined4 *)(param_1 + 0x2c),param_2,param_3,param_2,param_3,
                *(undefined8 *)(param_1 + 0x198),
                *(undefined8 *)(*(longlong *)(param_1 + 0x1b0) + uVar6 * 0x28),uVar4,lVar3,lVar2,0,0
                ,0,0,uVar5,1);
  return;
}

