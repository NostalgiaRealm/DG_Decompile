/*
 * FUN_180007228 at 180007228
 * undefined8 __fastcall FUN_180007228(longlong param_1, uint param_2, longlong * param_3, int param_4, int param_5)
 * Address ranges: 180007228-1800073cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180007228(longlong param_1,uint param_2,longlong *param_3,int param_4,int param_5)

{
  undefined8 in_RAX;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  
  uVar6 = (ulonglong)param_2;
  if (param_3 == (longlong *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = (int)param_3[0xb];
  }
  if (((*(longlong **)(&DAT_000066c8 + uVar6 * 8 + param_1) == param_3) &&
      (*(int *)(param_1 + 0x6748 + uVar6 * 4) == param_5)) &&
     (*(int *)(param_1 + 0x6788 + uVar6 * 4) == param_4)) goto LAB_1800073bd;
  uVar3 = 1 << ((byte)param_2 & 0x1f);
  if (param_3 != (longlong *)0x0) {
    (**(code **)(*param_3 + 0x10))(param_3);
    *(uint *)(&DAT_00006808 + param_1) = *(uint *)(&DAT_00006808 + param_1) | uVar3;
  }
  if (*(longlong *)(&DAT_000066c8 + uVar6 * 8 + param_1) != 0) {
    *(undefined4 *)(*(longlong *)(&DAT_000066c8 + uVar6 * 8 + param_1) + 0x84) = 0xffffffff;
    (**(code **)(**(longlong **)(&DAT_000066c8 + uVar6 * 8 + param_1) + 0x18))();
  }
  *(longlong **)(&DAT_000066c8 + uVar6 * 8 + param_1) = param_3;
  *(int *)(param_1 + 0x6748 + uVar6 * 4) = param_5;
  *(int *)(param_1 + 0x6788 + uVar6 * 4) = param_4;
  if (param_3 == (longlong *)0x0) {
    *(uint *)(param_1 + 0x67c8) = *(uint *)(param_1 + 0x67c8) & ~uVar3;
    *(uint *)(&DAT_000067dc + param_1) = *(uint *)(&DAT_000067dc + param_1) & ~uVar3;
  }
  else {
    *(uint *)((longlong)param_3 + 0x84) = param_2;
    *(uint *)(param_1 + 0x67c8) = *(uint *)(param_1 + 0x67c8) | uVar3;
    if (param_3[3] == 0) {
      uVar1 = *(uint *)(&DAT_000067dc + param_1) & ~uVar3;
    }
    else {
      uVar1 = *(uint *)(&DAT_000067dc + param_1) | uVar3;
    }
    *(uint *)(&DAT_000067dc + param_1) = uVar1;
  }
  uVar2 = ~uVar3;
  uVar1 = *(uint *)(param_1 + 0x67d0) | uVar3;
  if (iVar5 == 0) {
    uVar1 = uVar2 & *(uint *)(param_1 + 0x67d0);
  }
  *(uint *)(param_1 + 0x67d0) = uVar1;
  if ((param_3 == (longlong *)0x0) || ((*(byte *)(param_3 + 10) & 0x10) == 0)) {
    *(uint *)(param_1 + 0x67d4) = *(uint *)(param_1 + 0x67d4) & uVar2;
    if (param_3 != (longlong *)0x0) goto LAB_180007353;
LAB_180007369:
    *(uint *)(param_1 + 0x67d8) = *(uint *)(param_1 + 0x67d8) & uVar2;
    if (param_3 == (longlong *)0x0) {
      in_RAX = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x160))
                         (*(longlong **)(param_1 + 0x28),param_2,0,0,param_5);
      goto LAB_1800073bd;
    }
  }
  else {
    *(uint *)(param_1 + 0x67d4) = *(uint *)(param_1 + 0x67d4) | uVar3;
LAB_180007353:
    if (param_3[0xc] == 0) goto LAB_180007369;
    *(uint *)(param_1 + 0x67d8) = *(uint *)(param_1 + 0x67d8) | uVar3;
  }
  lVar4 = param_3[0xc];
  *(undefined1 *)((longlong)param_3 + 0x89) = 1;
  if (lVar4 == 0) {
    lVar4 = param_3[0xd];
  }
  in_RAX = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x160))
                     (*(longlong **)(param_1 + 0x28),param_2,lVar4,param_4,param_5);
LAB_1800073bd:
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}

