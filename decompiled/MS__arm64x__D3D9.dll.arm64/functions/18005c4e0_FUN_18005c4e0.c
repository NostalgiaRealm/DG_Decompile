/*
 * FUN_18005c4e0 at 18005c4e0
 * undefined FUN_18005c4e0(void)
 * Address ranges: 18005c4e0-18005c6ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18005c4e0(undefined8 param_1,longlong param_2,longlong param_3,uint param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  byte bVar4;
  bool bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined *puVar10;
  
  uVar6 = 0;
  uVar7 = 0;
  if (*(int *)(param_2 + 8) != 0) {
    do {
      bVar4 = *(byte *)(param_2 + 0x214 + uVar7);
      uVar9 = (ulonglong)bVar4;
      if ((param_4 & 1) == 0) {
        bVar5 = bVar4 == 0x10;
      }
      else {
        bVar5 = bVar4 == 1;
      }
      if (!bVar5) {
        lVar8 = param_2 + uVar9 * 8;
        puVar2 = (undefined8 *)(param_3 + uVar6 * 0x20);
        uVar6 = (ulonglong)((int)uVar6 + 1);
        uVar3 = *(undefined4 *)(&DAT_18022c180 + (ulonglong)*(byte *)(lVar8 + 0x18) * 4);
        *puVar2 = (&PTR_s_POSITION_180234880)[uVar9];
        *(uint *)(puVar2 + 1) = (uint)(byte)(&DAT_18022c1d0)[uVar9];
        *(undefined4 *)((longlong)puVar2 + 0xc) = uVar3;
        *(int *)(puVar2 + 2) = (int)*(char *)(lVar8 + 0x14);
        bVar4 = *(byte *)(lVar8 + 0x17);
        puVar2[3] = 0;
        *(uint *)((longlong)puVar2 + 0x14) = (uint)bVar4 << 2;
      }
      uVar1 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_2 + 8));
  }
  lVar8 = 7;
  do {
    if (*(char *)(param_2 + 0x14 + lVar8 * 8) == -1) {
      puVar2 = (undefined8 *)(param_3 + uVar6 * 0x20);
      puVar10 = (&PTR_s_POSITION_180234880)[lVar8];
      uVar6 = (ulonglong)((int)uVar6 + 1);
      *(undefined4 *)((longlong)puVar2 + 0x1c) = 0;
      *puVar2 = puVar10;
      *(uint *)(puVar2 + 1) = (uint)(byte)(&DAT_18022c1d0)[lVar8];
      *(undefined8 *)((longlong)puVar2 + 0xc) = 0x29;
      *(undefined8 *)((longlong)puVar2 + 0x14) = 0;
    }
    puVar10 = PTR_s_COLOR_1802348a8;
    lVar8 = lVar8 + 1;
  } while (lVar8 != 0xf);
  if (*(char *)(param_2 + 0x3c) == -1) {
    puVar2 = (undefined8 *)(param_3 + uVar6 * 0x20);
    uVar6 = (ulonglong)((int)uVar6 + 1);
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = puVar10;
    puVar2[1] = 0x5700000000;
  }
  puVar10 = PTR_s_COLOR_1802348b0;
  if (*(char *)(param_2 + 0x44) == -1) {
    puVar2 = (undefined8 *)(param_3 + uVar6 * 0x20);
    uVar6 = (ulonglong)((int)uVar6 + 1);
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = puVar10;
    puVar2[1] = 0x5700000001;
  }
  puVar10 = PTR_s_TEXCOORD_1802348a0;
  if (*(char *)(param_2 + 0x34) == -1) {
    puVar2 = (undefined8 *)(param_3 + uVar6 * 0x20);
    uVar6 = (ulonglong)((int)uVar6 + 1);
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = puVar10;
    puVar2[1] = 0x290000000d;
  }
  puVar10 = PTR_s_TEXCOORD_180234898;
  if (*(int *)(param_2 + 4) != 0) {
    if (*(char *)(param_2 + 0x2c) == -1) {
      puVar2 = (undefined8 *)(param_3 + uVar6 * 0x20);
      uVar6 = (ulonglong)((int)uVar6 + 1);
      puVar2[2] = 0;
      puVar2[3] = 0;
      *puVar2 = puVar10;
      puVar2[1] = 0x600000008;
    }
    puVar10 = PTR_s_TEXCOORD_180234888;
    if (*(char *)(param_2 + 0x1c) == -1) {
      puVar2 = (undefined8 *)(param_3 + uVar6 * 0x20);
      uVar6 = (ulonglong)((int)uVar6 + 1);
      puVar2[2] = 0;
      puVar2[3] = 0;
      *puVar2 = puVar10;
      puVar2[1] = 0x600000009;
    }
    puVar10 = PTR_s_TEXCOORD_180234890;
    if (*(char *)(param_2 + 0x24) == -1) {
      puVar2 = (undefined8 *)(param_3 + uVar6 * 0x20);
      uVar6 = (ulonglong)((int)uVar6 + 1);
      puVar2[2] = 0;
      puVar2[3] = 0;
      *puVar2 = puVar10;
      puVar2[1] = 0x1c0000000a;
    }
    puVar10 = PTR_s_TEXCOORD_1802348f8;
    if (*(char *)(param_2 + 0x8c) == -1) {
      puVar2 = (undefined8 *)(param_3 + uVar6 * 0x20);
      uVar6 = (ulonglong)((int)uVar6 + 1);
      puVar2[2] = 0;
      puVar2[3] = 0;
      *puVar2 = puVar10;
      puVar2[1] = 0x60000000b;
    }
  }
  return uVar6;
}

