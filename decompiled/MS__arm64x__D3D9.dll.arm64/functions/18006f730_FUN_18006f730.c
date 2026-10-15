/*
 * FUN_18006f730 at 18006f730
 * undefined FUN_18006f730(void)
 * Address ranges: 18006f730-18006f86b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18006f730(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  char *pcVar1;
  int iVar2;
  byte bVar3;
  longlong lVar4;
  ulonglong extraout_x1;
  uint uVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined8 extraout_x10;
  undefined8 uVar14;
  undefined8 extraout_x11;
  undefined4 extraout_w12;
  undefined4 local_50 [2];
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [36];
  
  uVar5 = 0;
  uVar12 = 0;
  do {
    pcVar1 = (char *)(*(longlong *)(param_2 + 0x10) + 0x4880 + uVar12);
    uVar11 = (uint)uVar12;
    uVar12 = (ulonglong)(uVar11 + 1);
    uVar5 = (uint)(*pcVar1 != '\0') << (ulonglong)(uVar11 & 0x1f) |
            uVar5 & (1 << (ulonglong)(uVar11 & 0x1f) ^ 0xffffffffU);
  } while (uVar11 + 1 < 4);
  FUN_1800f48b8(param_2 + 0x20,param_3,uVar5,&DAT_180234a58,0);
  local_50[0] = 0;
  uVar12 = 0;
  uVar7 = 0x10000000;
  uVar13 = 0x18000000;
  uVar14 = 0x20000000;
  puVar6 = local_50;
  puVar10 = auStack_48;
  puVar9 = auStack_44;
  uVar8 = 5;
  do {
    bVar3 = *(byte *)(*(longlong *)(param_2 + 0x10) + uVar12 + 0x4880);
    if ((int)uVar7 == (uint)bVar3 * 0x8000000) {
      uVar13 = 1;
LAB_18006f808:
      iVar2 = (int)(uint)uVar12 >> 3;
      *(byte *)((longlong)puVar6 + (longlong)iVar2) =
           *(byte *)((longlong)puVar6 + (longlong)iVar2) |
           (byte)(1 << (ulonglong)((uint)uVar12 & 7));
      func_0x000180213628(param_2 + 0x28,uVar12,uVar13);
      lVar4 = (extraout_x1 & 0xffffffff) * 8;
      *(undefined4 *)(puVar10 + lVar4) = extraout_w12;
      *(int *)(puVar9 + lVar4) = (int)uVar8;
      uVar12 = extraout_x1;
      uVar13 = extraout_x10;
      uVar14 = extraout_x11;
    }
    else {
      if ((int)uVar13 == (uint)bVar3 * 0x8000000) {
        uVar13 = 2;
        goto LAB_18006f808;
      }
      if ((int)uVar14 == (uint)bVar3 * 0x8000000) {
        uVar13 = 4;
        goto LAB_18006f808;
      }
    }
    uVar5 = (int)uVar12 + 1;
    uVar12 = (ulonglong)uVar5;
    if (3 < uVar5) {
      FUN_1800f45d8(param_2 + 0x20,param_3,local_50[0],&DAT_180234a10,auStack_48);
      return;
    }
  } while( true );
}

