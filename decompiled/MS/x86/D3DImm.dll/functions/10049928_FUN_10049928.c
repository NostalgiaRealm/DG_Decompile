/*
 * FUN_10049928 at 10049928
 * undefined4 __thiscall FUN_10049928(void * this, undefined * param_1, undefined4 param_2)
 * Address ranges: 10049928-100499f8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10049928(void *this,undefined *param_1,undefined4 param_2)

{
  undefined *puVar1;
  BOOL BVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int local_18 [5];
  
  BVar2 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar2 == 0) {
    FUN_1003c603();
  }
  uVar4 = 0x80070057;
  if (param_1 != (undefined *)0x0) {
    local_18[4] = (**(code **)(**(int **)((int)this + 0x90) + 0x44))();
    uVar5 = 0;
    local_18[0] = 0;
    local_18[1] = 0;
    local_18[2] = 0;
    local_18[3] = 0;
    do {
      puVar1 = (&PTR_DAT_1005dcec)[*(int *)((int)this + 0x98)];
      iVar3 = 0;
      do {
        if (*(int *)(puVar1 + iVar3 * 4 + uVar5 * 0x298 + 0x10) != local_18[iVar3]) {
          iVar3 = 0x24;
          if (*(char *)(local_18[4] + 0x957) == '\0') {
            iVar3 = 0x28;
          }
          if (((puVar1[uVar5 * 0x298 + 0x21] == '\0') || (*(char *)(local_18[4] + 0x7ed) == '\0'))
             && (iVar3 = (*(code *)param_1)(*(undefined4 *)(puVar1 + uVar5 * 0x298 + 0x2c),
                                            *(undefined4 *)(puVar1 + iVar3 + uVar5 * 0x298),
                                            uVar5 * 0xec + 0x1594 + (int)this,param_2), iVar3 == 0))
          goto LAB_100499e2;
          break;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 != 4);
      uVar5 = uVar5 + 1;
    } while (uVar5 < 7);
LAB_100499e2:
    uVar4 = 0;
  }
  LeaveCriticalSection(DAT_1006bbd0);
  return uVar4;
}

