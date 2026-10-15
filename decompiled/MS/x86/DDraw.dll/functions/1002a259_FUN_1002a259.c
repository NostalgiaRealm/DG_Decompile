/*
 * FUN_1002a259 at 1002a259
 * int __thiscall FUN_1002a259(void * this, int param_1, int * param_2, undefined4 param_3)
 * Address ranges: 1002a259-1002a32f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_1002a259(void *this,int param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int local_8;
  
  iVar4 = -0x7ff8ffa9;
  if (param_2 != (int *)0x0) {
    *param_2 = 0;
    local_8 = 0;
    iVar4 = FUN_1002b2db((void *)((int)this + 0x2c),param_1,param_2,&local_8);
    if (iVar4 == -0x7fffbffe) {
      cVar1 = (**(code **)(**(int **)((int)this + 0xfc) + 0x30))();
      if (cVar1 != '\0') {
        FUN_10022705();
        if (DAT_1006c238 != (int *)0x0) {
          iVar4 = (**(code **)(*DAT_1006c238 + 0x10))(this,param_1,param_2,param_3);
          if (iVar4 == -0x7fffbffe) {
            iVar4 = *(int *)((int)this + 0xfc);
            uVar2 = 0;
            if (*(ushort *)(iVar4 + 0x48) != 0) {
              do {
                if (*(int *)((int)this + 0xf8) == *(int *)(iVar4 + 100 + uVar2 * 0x1c)) {
                  iVar3 = uVar2 * 0x1c + 0x4c + iVar4;
                  goto LAB_1002a2fc;
                }
                uVar2 = uVar2 + 1;
              } while (uVar2 < *(ushort *)(iVar4 + 0x48));
            }
            iVar3 = 0;
LAB_1002a2fc:
            iVar4 = (**(code **)(*DAT_1006c238 + 0xc))
                              (iVar4,&DAT_1006c2b0 + *(int *)(iVar4 + 0x11c) * 0x8a,this,param_1,
                               param_2,iVar3);
          }
        }
      }
    }
  }
  return iVar4;
}

