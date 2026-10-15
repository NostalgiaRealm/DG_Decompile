/*
 * FUN_1003966c at 1003966c
 * char __stdcall FUN_1003966c(int param_1, uint param_2)
 * Address ranges: 1003966c-100396d2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1003966c(int param_1,uint param_2)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  
  cVar1 = '\x01';
  if (param_2 == 0xffffffff) {
    param_2 = *(uint *)(param_1 + 0xc);
    uVar3 = 0;
    if (param_2 != 0) {
      do {
        if (uVar3 < *(uint *)(param_1 + 0xc)) {
          piVar2 = (int *)(*(int *)(param_1 + 8) + 0x10 + uVar3 * 0x28);
        }
        else {
          piVar2 = (int *)&DAT_00000008;
        }
        cVar1 = FUN_10039604(piVar2,'\x01');
        uVar3 = uVar3 + 1;
      } while (uVar3 < param_2);
    }
  }
  else {
    piVar2 = (int *)FUN_10039f20((void *)(param_1 + 4),&param_2);
    if (piVar2 != (int *)0x0) {
      cVar1 = FUN_10039604(piVar2,'\x01');
    }
  }
  return cVar1;
}

