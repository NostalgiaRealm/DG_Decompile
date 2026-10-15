/*
 * FUN_1800c2ca8 at 1800c2ca8
 * undefined FUN_1800c2ca8(void)
 * Address ranges: 1800c2ca8-1800c2ddb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800c2ca8(longlong param_1,undefined8 *param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  bool bVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  
  if (*(char *)(param_1 + 0x40) == '\0') {
    lVar7 = *(longlong *)(param_1 + 0x18);
    uVar6 = 0x88760868;
    if (*(char *)(lVar7 + 0x6819) == '\0') {
      if (((*(uint *)(lVar7 + 0xe78) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
        bVar2 = false;
        *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
      }
      else {
        bVar2 = true;
        iVar5 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
        if (iVar5 == 0) {
          FUN_180003398();
        }
      }
      uVar6 = (**(code **)(**(longlong **)(lVar7 + 0x28) + 0x1c0))
                        (*(longlong **)(lVar7 + 0x28),*(undefined8 *)(param_1 + 0x30),
                         *(undefined4 *)(param_1 + 0x20),param_2,param_3,param_4);
      if (bVar2) {
        (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
      }
      else {
        *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
      }
    }
  }
  else {
    uVar4 = func_0x0001801ddd58();
    if (param_3 != 0) {
      if (param_3 < uVar4) {
        return 0x80004005;
      }
      puVar3 = (undefined8 *)(param_1 + 0x38);
      for (uVar1 = uVar4 >> 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *param_2 = *puVar3;
        puVar3 = puVar3 + 1;
        param_2 = param_2 + 1;
      }
      if ((uVar4 >> 2 & 1) != 0) {
        *(undefined4 *)param_2 = *(undefined4 *)puVar3;
      }
    }
    uVar6 = 0;
  }
  return uVar6;
}

