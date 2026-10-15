/*
 * FUN_10043520 at 10043520
 * undefined FUN_10043520(void)
 * Address ranges: 10043520-100435c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10043520(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  uVar3 = 0;
  if (uVar1 != 0) {
    if (uVar1 == 0) {
      iVar2 = 0;
      goto LAB_10043568;
    }
    do {
      iVar2 = *(int *)(param_1 + 0x10) + uVar3 * 0x28;
LAB_10043568:
      iVar2 = *(int *)(iVar2 + 0x20);
      if (iVar2 != 0) {
        FUN_100435d0(iVar2);
        FUN_100fec90(iVar2,0x124);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x14));
  }
  FUN_100fed00(*(undefined4 *)(param_1 + 0xc));
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  return;
}

