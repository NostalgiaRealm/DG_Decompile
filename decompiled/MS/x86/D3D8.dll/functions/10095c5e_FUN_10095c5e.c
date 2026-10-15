/*
 * FUN_10095c5e at 10095c5e
 * undefined __stdcall FUN_10095c5e(int * param_1)
 * Address ranges: 10095c5e-10095ca0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10095c5e(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1[0xb] == 2) {
    piVar1 = param_1 + 1;
    param_1 = (int *)0x0;
    iVar2 = (*(code *)**(undefined4 **)*piVar1)((undefined4 *)*piVar1,&DAT_100af3f0,&param_1);
    if (-1 < iVar2) {
      (**(code **)(*param_1 + 0x98))(param_1,0xc);
      (**(code **)(*param_1 + 8))(param_1);
    }
  }
  return;
}

