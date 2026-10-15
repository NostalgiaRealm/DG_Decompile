/*
 * FUN_1004c9be at 1004c9be
 * undefined4 __thiscall FUN_1004c9be(void * this, int * param_1)
 * Address ranges: 1004c9be-1004ca49
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1004c9be(void *this,int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  uVar3 = 0x80070057;
  if ((((param_1 != (int *)0x0) && (*param_1 == 0x2c)) && ((float)param_1[7] != 0.0)) &&
     (((float)param_1[8] != 0.0 && ((float)param_1[10] - (float)param_1[9] != 0.0)))) {
    uVar3 = 0x88760306;
    if (*(void **)((int)this + 0x84) != (void *)0x0) {
      uVar3 = 0x80070057;
      uVar1 = FUN_10040b88(*(void **)((int)this + 0x84),(int)param_1);
      if ((char)uVar1 != '\0') {
        piVar4 = (int *)((int)this + 0xa4);
        for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar4 = *param_1;
          param_1 = param_1 + 1;
          piVar4 = piVar4 + 1;
        }
        uVar3 = 0;
      }
      *(undefined1 *)((int)this + 0xd2) = 1;
      *(undefined1 *)((int)this + 0xd0) = 1;
    }
  }
  return uVar3;
}

