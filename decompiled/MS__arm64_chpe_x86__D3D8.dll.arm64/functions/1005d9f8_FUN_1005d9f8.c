/*
 * FUN_1005d9f8 at 1005d9f8
 * undefined FUN_1005d9f8(void)
 * Address ranges: 1005d9f8-1005db37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1005d9f8(ulonglong param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  ulonglong extraout_x1;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int extraout_w11;
  int extraout_w12;
  int extraout_w13;
  int extraout_w14;
  int extraout_w15;
  undefined1 auStack_220 [12];
  undefined1 auStack_214 [4];
  undefined1 auStack_210 [4];
  undefined1 auStack_20c [4];
  undefined1 auStack_208 [456];
  ulonglong uVar8;
  
  uVar9 = (ulonglong)*(uint *)(param_2 + 8);
  uVar8 = param_1 & 0xffffffff;
  iVar7 = (int)param_1;
  uVar6 = 0;
  if (*(uint *)(param_2 + 8) != 0) {
    uVar12 = ZEXT48(auStack_214);
    uVar11 = ZEXT48(auStack_210);
    uVar10 = ZEXT48(auStack_20c);
    uVar4 = ZEXT48(auStack_208);
    uVar5 = uVar6;
    do {
      bVar1 = *(byte *)(param_2 + 0x9c + uVar5);
      bVar2 = *(byte *)(param_2 + 0x19 + (uint)bVar1 * 8);
      uVar6 = uVar5;
      uVar3 = FUN_100837d8(bVar2,uVar4);
      iVar7 = (int)uVar8;
      uVar6 = uVar6 + 1;
      *(undefined4 *)(extraout_w13 + uVar5 * 0x1c) = uVar3;
      *(uint *)(extraout_w12 + uVar5 * 0x1c) = bVar2 & 0xf;
      *(undefined4 *)(extraout_w11 + uVar5 * 0x1c) =
           *(undefined4 *)(extraout_w14 + (uint)*(byte *)(param_2 + 0x18 + (uint)bVar1 * 8) * 4);
      *(int *)((int)uVar12 + uVar5 * 0x1c) = (int)*(char *)(param_2 + 0x14 + (uint)bVar1 * 8);
      *(uint *)((int)uVar11 + uVar5 * 0x1c) = (uint)*(byte *)(extraout_w15 + (uint)bVar1 * 8) << 2;
      *(undefined4 *)((int)uVar10 + uVar5 * 0x1c) = 0;
      *(undefined4 *)((int)extraout_x1 + uVar5 * 0x1c) = 0;
      uVar4 = extraout_x1;
      uVar5 = uVar6;
    } while (uVar6 < (uint)uVar9);
  }
  uVar3 = FUN_100e6f10(*(int *)(iVar7 + 4) + *(int *)(iVar7 + 8) * 0x16c0 + 0x1cf0,auStack_220,uVar6
                      );
  return uVar3;
}

