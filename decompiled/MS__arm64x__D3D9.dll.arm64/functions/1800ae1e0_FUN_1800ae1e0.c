/*
 * FUN_1800ae1e0 at 1800ae1e0
 * undefined FUN_1800ae1e0(void)
 * Address ranges: 1800ae1e0-1800ae3e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800ae1e0(longlong param_1,longlong param_2,undefined8 *param_3,undefined4 param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60 [2];
  undefined1 auStack_50 [16];
  
  iVar5 = -0x7789f794;
  if (param_2 != 0) {
    if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
      bVar1 = false;
      *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
    }
    else {
      bVar1 = true;
      iVar3 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
      if (iVar3 == 0) {
        FUN_180003398();
      }
    }
    iVar4 = *(int *)(param_2 + -0x38);
    iVar3 = iVar5;
    if ((((10 < iVar4 - 0x46U) || ((0x6abU >> (ulonglong)(iVar4 - 0x46U & 0x1f) & 1) == 0)) &&
        ((iVar4 != 0x36314644 && iVar4 != 0x34324644) && iVar4 != 0x5a544e49)) &&
       (iVar3 = 0, *(int *)(param_2 + -0x2c) != 0)) {
      iVar3 = iVar5;
    }
    (*__imp_USER32_dll_SetRect)
              (local_60,0,0,*(undefined4 *)(param_2 + -0x20),*(undefined4 *)(param_2 + -0x1c));
    if (param_3 == (undefined8 *)0x0) {
      param_3 = local_60;
    }
    uStack_68 = param_3[1];
    local_70 = *param_3;
    (*__imp_USER32_dll_IntersectRect)(auStack_50,&local_70,local_60);
    if (-1 < iVar3) {
      iVar4 = (*__imp_USER32_dll_EqualRect)(auStack_50,&local_70);
      if (iVar4 == 0) {
        iVar3 = iVar5;
      }
      if (-1 < iVar3) {
        lVar6 = *(longlong *)(param_2 + -0x78);
        if ((*(uint *)(lVar6 + 0x100) & 0x800) != 0) {
          iVar3 = iVar5;
        }
        if ((-1 < iVar3) && (*(char *)(param_1 + -0x1f) == '\0')) {
          FUN_18000bc70(param_2 + -0x80,0);
          cVar2 = (**(code **)(**(longlong **)(param_1 + -0x59a0) + 0x100))
                            ((float)(int)local_70,(float)local_70._4_4_,(float)(int)uStack_68,
                             (float)uStack_68._4_4_,*(longlong **)(param_1 + -0x59a0),
                             *(undefined4 *)(lVar6 + 0x94),*(undefined4 *)(lVar6 + 0x98),
                             *(undefined8 *)(*(longlong *)(param_2 + -0x78) + 0x70),param_4);
          if (cVar2 == '\0') {
            iVar3 = -0x7789f7d9;
          }
          if (*(longlong *)(*(longlong *)(param_2 + -0x78) + 0x70) != 0) {
            FUN_180005df8(*(undefined8 *)(param_2 + -0x58),param_2 + -0x80);
          }
        }
      }
    }
    iVar5 = iVar3;
    if (bVar1) {
      (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
    }
    else {
      *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
    }
  }
  return iVar5;
}

