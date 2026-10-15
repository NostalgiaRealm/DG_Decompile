/*
 * _grSstWinOpen@28 at 180001474
 * bool __fastcall _grSstWinOpen@28(ulonglong param_1, uint param_2, uint param_3, undefined4 param_4, undefined1 param_5, uint param_6, uint param_7)
 * Address ranges: 180001474-180001535
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool _grSstWinOpen_28(ulonglong param_1,uint param_2,uint param_3,undefined4 param_4,
                     undefined1 param_5,uint param_6,uint param_7)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined *puVar4;
  uint in_stack_ffffffffffffffa4;
  undefined1 local_38 [8];
  char *local_30;
  
                    /* 0x1474  82  _grSstWinOpen@28
                       0x1474  239  grSstWinOpen */
  local_30 = "3DfxSpl2.dll";
  local_38[0] = 0;
  puVar4 = FUN_180015044();
  puVar4[0x65] = 1;
  LOCK();
  piVar1 = (int *)(puVar4 + 0x5c);
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if (iVar3 == 0) {
    cVar2 = FUN_180015224((longlong)puVar4);
    if ((cVar2 != '\0') && (*(int *)(puVar4 + 0x58) == 0)) {
      iVar3 = FUN_180015458(puVar4,param_1 & 0xffffffff,param_2,param_3,param_4,
                            (ulonglong)in_stack_ffffffffffffffa4 << 0x20,param_5,param_6,param_7,
                            local_38);
      goto LAB_18000151c;
    }
  }
  iVar3 = 0;
LAB_18000151c:
  LOCK();
  *(int *)(puVar4 + 0x5c) = *(int *)(puVar4 + 0x5c) + -1;
  UNLOCK();
  puVar4[0x65] = 0;
  return iVar3 != 0;
}

