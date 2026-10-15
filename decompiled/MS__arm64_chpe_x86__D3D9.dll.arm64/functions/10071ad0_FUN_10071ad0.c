/*
 * FUN_10071ad0 at 10071ad0
 * undefined FUN_10071ad0(void)
 * Address ranges: 10071ad0-10071c3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10071ad0(ulonglong param_1,int param_2,ulonglong param_3)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  ulonglong extraout_x1;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  int extraout_w11;
  int extraout_w12;
  int extraout_w13;
  int extraout_w14;
  int extraout_w15;
  undefined1 auStack_740 [16];
  undefined1 auStack_730 [4];
  undefined1 auStack_72c [4];
  undefined1 auStack_728 [1768];
  ulonglong uVar7;
  
  param_3 = param_3 & 0xffffffff;
  uVar8 = (ulonglong)*(uint *)(param_2 + 8);
  uVar7 = param_1 & 0xffffffff;
  iVar6 = (int)param_1;
  uVar5 = 0;
  if (*(uint *)(param_2 + 8) != 0) {
    uVar11 = ZEXT48(auStack_730);
    uVar10 = ZEXT48(auStack_72c);
    uVar9 = ZEXT48(auStack_728);
    uVar4 = uVar5;
    do {
      bVar1 = *(byte *)(param_2 + 0x214 + uVar4);
      bVar2 = *(byte *)(param_2 + 0x19 + (uint)bVar1 * 8);
      uVar5 = uVar4;
      uVar3 = FUN_100a33c8(bVar2,param_3);
      iVar6 = (int)uVar7;
      *(undefined4 *)(extraout_w14 + uVar4 * 0x1c) = uVar3;
      *(uint *)(extraout_w13 + uVar4 * 0x1c) = bVar2 & 0xf;
      *(undefined4 *)(extraout_w12 + uVar4 * 0x1c) =
           *(undefined4 *)(extraout_w15 + (uint)*(byte *)(param_2 + 0x18 + (uint)bVar1 * 8) * 4);
      iVar12 = (int)*(char *)(param_2 + 0x14 + (uint)bVar1 * 8);
      *(int *)(extraout_w11 + uVar4 * 0x1c) = iVar12;
      *(uint *)((int)uVar11 + uVar4 * 0x1c) = (uint)*(byte *)(param_2 + 0x17 + (uint)bVar1 * 8) << 2
      ;
      if ((int)extraout_x1 == 0) {
        iVar12 = 0;
      }
      else {
        iVar12 = *(int *)((int)extraout_x1 + iVar12 * 4);
      }
      uVar5 = uVar5 + 1;
      *(uint *)((int)uVar10 + uVar4 * 0x1c) = (uint)(iVar12 != 0);
      *(int *)((int)uVar9 + uVar4 * 0x1c) = iVar12;
      param_3 = extraout_x1;
      uVar4 = uVar5;
    } while (uVar5 < (uint)uVar8);
  }
  uVar3 = FUN_10119760(*(int *)(iVar6 + 4) + *(int *)(iVar6 + 8) * 0x16c0 + 0x1cf0,auStack_740,uVar5
                      );
  return uVar3;
}

