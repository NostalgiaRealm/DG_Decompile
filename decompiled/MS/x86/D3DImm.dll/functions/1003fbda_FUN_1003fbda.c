/*
 * FUN_1003fbda at 1003fbda
 * undefined4 __thiscall FUN_1003fbda(void * this, undefined4 param_1, int param_2, undefined4 * param_3, int param_4)
 * Address ranges: 1003fbda-1003fca1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_1003fbda(void *this,undefined4 param_1,int param_2,undefined4 *param_3,int param_4)

{
  uint uVar1;
  BOOL BVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  
  BVar2 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar2 == 0) {
    FUN_1003c603();
  }
  uVar5 = 0x80070057;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
    if (param_4 == 1) {
      uVar1 = *(uint *)((int)this + 0x1528);
      uVar4 = 0;
      if (uVar1 != 0) {
        do {
          if (*(int *)(*(int *)((int)this + 0x1524) + uVar4 * 8) == param_2) {
            if (uVar4 < uVar1 - 1) {
              puVar3 = *(undefined4 **)(*(int *)((int)this + 0x1524) + 4 + uVar4 * 8);
              (**(code **)*puVar3)(puVar3,param_1,param_3);
            }
            uVar5 = 0;
            break;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar1);
      }
    }
    else {
      if (param_4 == 2) {
        uVar5 = 0;
        if (*(int *)((int)this + 0x1528) == 0) goto LAB_1003fc8e;
        puVar3 = *(undefined4 **)(*(int *)((int)this + 0x1524) + 4);
      }
      else {
        if (param_4 != 4) goto LAB_1003fc8e;
        uVar5 = 0;
        if (*(int *)((int)this + 0x1528) == 0) goto LAB_1003fc8e;
        puVar3 = *(undefined4 **)
                  (*(int *)((int)this + 0x1524) + -4 + *(int *)((int)this + 0x1528) * 8);
      }
      uVar5 = (**(code **)*puVar3)(puVar3,param_1,param_3);
    }
  }
LAB_1003fc8e:
  LeaveCriticalSection(DAT_1006bbd0);
  return uVar5;
}

