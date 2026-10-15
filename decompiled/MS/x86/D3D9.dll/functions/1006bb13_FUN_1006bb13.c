/*
 * FUN_1006bb13 at 1006bb13
 * undefined8 __fastcall FUN_1006bb13(undefined4 param_1, undefined4 param_2, int param_3, int param_4, byte param_5)
 * Address ranges: 1006bb13-1006bbda
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 __fastcall
FUN_1006bb13(undefined4 param_1,undefined4 param_2,int param_3,int param_4,byte param_5)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  if (*(int *)(param_3 + 0xdc + param_4 * 4) == 0) {
    if (*(char *)(param_3 + 0x1b3) == '\0') {
      *(uint *)(param_3 + 0xdc + param_4 * 4) = *(uint *)(param_3 + 0x148) | 0x410100;
      *(char *)(*(int *)(param_3 + 0x148) + 0x136 + param_3) = (char)param_4;
      *(int *)(param_3 + 0x148) = *(int *)(param_3 + 0x148) + 1;
    }
    else {
      *(uint *)(param_3 + 0xdc + param_4 * 4) = *(byte *)(param_3 + 0x136 + param_4) | 0x410100;
    }
  }
  if (*(char *)(param_3 + 0x1b4) == '\0') {
    iVar3 = param_4;
    if (param_4 == 0x10) {
      iVar3 = 1;
    }
    uVar4 = __aullshr((byte)(iVar3 << 2),*(uint *)(*(int *)(param_3 + 0x1a0) + 0x4c));
    param_2 = (undefined4)(uVar4 >> 0x20);
    uVar2 = (uint)uVar4 & 0xf;
    if (((((uVar4 & 0xf) != 0) && (uVar2 != 1)) && (uVar2 != 2)) && ((uVar2 != 3 && (uVar2 != 4))))
    {
      if ((uVar2 == 5) || (uVar2 == 6)) {
        pbVar1 = (byte *)(param_3 + 0x124 + param_4);
        *pbVar1 = *pbVar1 | 1;
      }
      goto LAB_1006bbce;
    }
  }
  pbVar1 = (byte *)(param_3 + 0x124 + param_4);
  *pbVar1 = *pbVar1 | param_5;
LAB_1006bbce:
  return CONCAT44(param_2,*(undefined4 *)(param_3 + 0xdc + param_4 * 4));
}

