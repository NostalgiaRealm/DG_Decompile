/*
 * FUN_10059ee0 at 10059ee0
 * undefined FUN_10059ee0(void)
 * Address ranges: 10059ee0-10059f9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10059ee0(undefined8 param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  if (*(uint *)(param_2 + 8) != 0) {
    uVar6 = 0;
    do {
      bVar3 = *(byte *)(param_2 + 0x9c + uVar6);
      uVar5 = (uint)*(byte *)(bVar3 + 0x1009e6f0);
      piVar2 = (int *)(param_3 + uVar5 * 8);
      if (bVar3 == 1) {
        iVar4 = *piVar2 + (uint)*(byte *)(param_2 + 0x15) * 4;
      }
      else {
        iVar4 = *piVar2;
      }
      *(int *)(param_4 + uVar6 * 0xc) = iVar4;
      uVar1 = uVar6 + 1;
      *(undefined4 *)(param_4 + 4 + uVar6 * 0xc) = *(undefined4 *)(param_3 + 4 + uVar5 * 8);
      *(undefined1 *)(param_4 + 8 + uVar6 * 0xc) = *(undefined1 *)(param_2 + 0x18 + (uint)bVar3 * 8)
      ;
      *(byte *)(param_4 + 9 + uVar6 * 0xc) = ((byte *)(param_2 + 0x15))[(uint)bVar3 * 8];
      uVar6 = uVar1;
    } while (uVar1 < *(uint *)(param_2 + 8));
  }
  return;
}

