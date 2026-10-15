/*
 * FUN_180005000 at 180005000
 * undefined FUN_180005000(void)
 * Address ranges: 180005000-1800051eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180005000(longlong param_1,uint param_2,longlong *param_3,int param_4,int param_5)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  
  if (param_3 == (longlong *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = (int)param_3[0xb];
  }
  lVar3 = param_1 + (ulonglong)param_2 * 8;
  if (((*(longlong **)(lVar3 + 0x66c8) == param_3) &&
      (lVar1 = param_1 + (ulonglong)param_2 * 4, *(int *)(lVar1 + 0x6748) == param_5)) &&
     (*(int *)(lVar1 + 0x6788) == param_4)) {
    return 1;
  }
  uVar2 = 1 << (ulonglong)(param_2 & 0x1f);
  if (param_3 != (longlong *)0x0) {
    (**(code **)(*param_3 + 0x10))(param_3);
    *(uint *)(&DAT_00006808 + param_1) = *(uint *)(&DAT_00006808 + param_1) | uVar2;
  }
  if (*(longlong *)(lVar3 + 0x66c8) != 0) {
    *(undefined4 *)(*(longlong *)(lVar3 + 0x66c8) + 0x84) = 0xffffffff;
    (**(code **)(**(longlong **)(lVar3 + 0x66c8) + 0x18))();
  }
  lVar1 = param_1 + (ulonglong)param_2 * 4;
  *(longlong **)(lVar3 + 0x66c8) = param_3;
  *(int *)(lVar1 + 0x6748) = param_5;
  *(int *)(lVar1 + 0x6788) = param_4;
  if (param_3 == (longlong *)0x0) {
    *(uint *)(param_1 + 0x67c8) = *(uint *)(param_1 + 0x67c8) & (uVar2 ^ 0xffffffff);
    uVar4 = *(uint *)(&DAT_000067dc + param_1) & (uVar2 ^ 0xffffffff);
  }
  else {
    *(uint *)((longlong)param_3 + 0x84) = param_2;
    *(uint *)(param_1 + 0x67c8) = *(uint *)(param_1 + 0x67c8) | uVar2;
    uVar4 = *(uint *)(&DAT_000067dc + param_1) & (uVar2 ^ 0xffffffff);
    if (param_3[3] != 0) {
      uVar4 = *(uint *)(&DAT_000067dc + param_1) | uVar2;
    }
  }
  *(uint *)(&DAT_000067dc + param_1) = uVar4;
  uVar4 = *(uint *)(param_1 + 0x67d0) & (uVar2 ^ 0xffffffff);
  if (iVar5 != 0) {
    uVar4 = *(uint *)(param_1 + 0x67d0) | uVar2;
  }
  *(uint *)(param_1 + 0x67d0) = uVar4;
  if ((param_3 == (longlong *)0x0) || ((*(uint *)(param_3 + 10) >> 4 & 1) == 0)) {
    *(uint *)(param_1 + 0x67d4) = *(uint *)(param_1 + 0x67d4) & (uVar2 ^ 0xffffffff);
    if (param_3 != (longlong *)0x0) goto LAB_180005164;
LAB_180005180:
    *(uint *)(param_1 + 0x67d8) = *(uint *)(param_1 + 0x67d8) & (uVar2 ^ 0xffffffff);
    if (param_3 == (longlong *)0x0) {
      param_4 = 0;
      lVar3 = 0;
      goto LAB_1800051b4;
    }
  }
  else {
    *(uint *)(param_1 + 0x67d4) = *(uint *)(param_1 + 0x67d4) | uVar2;
LAB_180005164:
    if (param_3[0xc] == 0) goto LAB_180005180;
    *(uint *)(param_1 + 0x67d8) = *(uint *)(param_1 + 0x67d8) | uVar2;
  }
  lVar3 = param_3[0xc];
  *(undefined1 *)((longlong)param_3 + 0x89) = 1;
  if (lVar3 == 0) {
    lVar3 = param_3[0xd];
  }
LAB_1800051b4:
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x160))
            (*(longlong **)(param_1 + 0x28),param_2,lVar3,param_4,param_5);
  return 1;
}

