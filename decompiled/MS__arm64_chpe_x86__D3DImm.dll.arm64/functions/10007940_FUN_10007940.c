/*
 * FUN_10007940 at 10007940
 * undefined FUN_10007940(void)
 * Address ranges: 10007940-100079f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10007940(undefined8 param_1,int param_2,int param_3,undefined8 *param_4)

{
  int iVar1;
  int *piVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  param_4[1] = 0;
  *param_4 = 0;
  param_4[3] = 0;
  param_4[2] = 0;
  param_4[5] = 0;
  param_4[4] = 0;
  param_4[7] = 0;
  param_4[6] = 0;
  param_4[9] = 0;
  param_4[8] = 0;
  param_4[0xb] = 0;
  param_4[10] = 0;
  param_4[0xd] = 0;
  param_4[0xc] = 0;
  param_4[0xf] = 0;
  param_4[0xe] = 0;
  param_4[0x11] = 0;
  param_4[0x10] = 0;
  param_4[0x13] = 0;
  param_4[0x12] = 0;
  param_4[0x15] = 0;
  param_4[0x14] = 0;
  *(undefined4 *)(param_4 + 0x16) = 0;
  if (*(uint *)(param_2 + 8) != 0) {
    do {
      bVar3 = *(byte *)(param_2 + 0x9c + uVar5);
      if ((bVar3 < 0xf) && (uVar4 = (uint)bVar3, (0x7febU >> (ulonglong)(uVar4 & 0x1f) & 1) != 0)) {
        iVar1 = param_2 + uVar4 * 8;
        piVar2 = (int *)((int)param_4 + uVar4 * 0xc);
        *piVar2 = param_3 + (uint)*(byte *)(iVar1 + 0x17) * 4;
        *(undefined1 *)(piVar2 + 2) = *(undefined1 *)(iVar1 + 0x18);
        piVar2[1] = *(int *)(param_2 + 0xc);
        *(undefined1 *)((int)piVar2 + 9) = *(undefined1 *)(iVar1 + 0x15);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_2 + 8));
  }
  return;
}

