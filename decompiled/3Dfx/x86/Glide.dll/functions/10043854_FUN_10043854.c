/*
 * FUN_10043854 at 10043854
 * undefined __stdcall FUN_10043854(int * param_1)
 * Address ranges: 10043854-10043896
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10043854(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1[0xb] == 2) {
    piVar1 = param_1 + 1;
    param_1 = (int *)0x0;
    iVar2 = (*(code *)**(undefined4 **)*piVar1)((undefined4 *)*piVar1,&DAT_10051290,&param_1);
    if (-1 < iVar2) {
      (**(code **)(*param_1 + 0x98))(param_1,0xc);
      (**(code **)(*param_1 + 8))(param_1);
    }
  }
  return;
}

