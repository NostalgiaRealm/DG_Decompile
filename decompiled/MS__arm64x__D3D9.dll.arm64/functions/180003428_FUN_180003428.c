/*
 * FUN_180003428 at 180003428
 * undefined FUN_180003428(void)
 * Address ranges: 180003428-18000357b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180003428(longlong *param_1,uint param_2,longlong param_3)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 local_30 [2];
  
  thunk_FUN_180102fc0(param_1[0x1c6]);
  param_1[0x1c6] = 0;
  param_1[0x1c7] = 0;
  uVar6 = 0;
  while( true ) {
    if (param_2 <= uVar6) {
      uVar5 = FUN_1800038b0(param_1,param_2,param_3,param_1[0x1c6],0,1);
      if (-1 < (int)uVar5) {
        param_1[0x1d4] = (&DAT_180253860)[(ulonglong)*(uint *)(param_1 + 0x1d5) * 0x4b];
        lVar3 = DAT_18024de60;
        iVar1 = *(int *)(DAT_18024de60 + 0x370);
        *(int *)(DAT_18024de60 + 0x370) = iVar1 + 1;
        pcVar2 = __imp_KERNEL32_dll_CreateEventW;
        if (iVar1 == 0) {
          *(undefined1 *)(lVar3 + 0x7e8) = 0;
          DAT_1802587b0 = (*pcVar2)(0,0,0,0);
          if (DAT_1802587b0 != 0) {
            (*__imp_KERNEL32_dll_InitializeCriticalSection)(lVar3 + 0x388);
            uVar5 = (*__imp_KERNEL32_dll_CreateThread)(0,0,FUN_180100b20,lVar3,0,lVar3 + 0x374);
            pcVar2 = __imp_KERNEL32_dll_WaitForSingleObject;
            *(undefined8 *)(lVar3 + 0x378) = uVar5;
            (*pcVar2)(DAT_1802587b0,0xffffffff);
          }
        }
        (**(code **)(*param_1 + 0x18))
                  (param_1,*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_3 + 0xc));
        uVar5 = 0;
      }
      return uVar5;
    }
    local_30[0] = 0;
    uVar4 = FUN_180006748(param_1 + 0x1c6,local_30);
    if ((uVar4 & 1) == 0) break;
    uVar6 = uVar6 + 1;
  }
  return 0x80004005;
}

