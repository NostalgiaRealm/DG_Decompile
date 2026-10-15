/*
 * FUN_100cecb8 at 100cecb8
 * undefined FUN_100cecb8(void)
 * Address ranges: 100cecb8-100cee03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_100cecb8(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(&DAT_10162c20 + param_3 * 4);
  *param_1 = 0;
  *(char *)param_1 = (char)(uVar5 >> 3);
  if (uVar5 == 0x20) {
    iVar3 = param_3 * 0x2c;
    uVar5 = 0x10000;
    if (((int)(char)(&DAT_1016f220)[iVar3] & 7U) == 0) {
      uVar5 = 0;
    }
    uVar4 = 0x20000;
    if (((int)(char)(&DAT_1016f222)[iVar3] & 7U) == 0) {
      uVar4 = 0;
    }
    uVar2 = 0x40000;
    if (((int)(char)(&DAT_1016f224)[iVar3] & 7U) == 0) {
      uVar2 = 0;
    }
    uVar1 = 0x80000;
    if (((int)(char)(&DAT_1016f226)[iVar3] & 7U) == 0) {
      uVar1 = 0;
    }
    *(byte *)((int)param_1 + 1) =
         (byte)(((((((int)(char)(&DAT_1016f226)[iVar3] >> 3 & 0x3fU) << 2 |
                   (uint)(int)(char)(&DAT_1016f224)[iVar3] >> 3 & 0xff) & 0x3f) << 2 |
                 (uint)(int)(char)(&DAT_1016f222)[iVar3] >> 3 & 0xff) & 0x3f) << 2) |
         (byte)((uint)(int)(char)(&DAT_1016f220)[iVar3] >> 3);
    *param_1 = uVar5 | uVar4 | uVar2 | uVar1 | *param_1 & 0xfff0ffff;
  }
  iVar3 = 0x1c;
  if (param_3 == 0x15) {
    iVar3 = 0x2c;
  }
  switch(*(undefined4 *)(iVar3 + param_2)) {
  case 9:
    iVar3 = 2;
    break;
  default:
    uVar5 = *param_1 & 0xffcfffff;
    goto LAB_100cedd4;
  case 0x17:
    iVar3 = 1;
  }
  uVar5 = *param_1 & 0xffc00000 | *param_1 & 0xfffff | iVar3 << 0x14;
LAB_100cedd4:
  uVar4 = 0x400000;
  if (*(char *)(param_3 + 0x10162cc8) == '\0') {
    uVar4 = 0;
  }
  *param_1 = uVar4 | uVar5 & 0xffbfffff;
  return param_1;
}

