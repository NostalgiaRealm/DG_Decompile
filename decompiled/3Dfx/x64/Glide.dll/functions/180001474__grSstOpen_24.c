/*
 * _grSstOpen@24 at 180001474
 * bool __fastcall _grSstOpen@24(uint param_1, uint param_2, undefined4 param_3, undefined1 param_4, undefined8 param_5, int param_6)
 * Address ranges: 180001474-180001554
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool _grSstOpen_24(uint param_1,uint param_2,undefined4 param_3,undefined1 param_4,
                  undefined8 param_5,int param_6)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined *puVar4;
  uint in_stack_ffffffffffffffa4;
  uint in_stack_ffffffffffffffbc;
  undefined1 local_38 [8];
  char *local_30;
  
                    /* 0x1474  73  _grSstOpen@24
                       0x1474  234  grSstOpen */
  local_38[0] = 1;
  local_30 = "3DfxSpl.dll";
  puVar4 = FUN_180015384();
  puVar4[0x65] = 1;
  LOCK();
  piVar1 = (int *)(puVar4 + 0x5c);
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if (iVar3 == 0) {
    cVar2 = FUN_180015564((longlong)puVar4);
    if ((cVar2 != '\0') && (*(int *)(puVar4 + 0x58) == 0)) {
      iVar3 = FUN_180015798(puVar4,0,param_1,param_2,param_3,
                            (ulonglong)in_stack_ffffffffffffffa4 << 0x20,param_4,param_6,
                            (ulonglong)in_stack_ffffffffffffffbc << 0x20,local_38);
      goto LAB_18000150f;
    }
  }
  iVar3 = 0;
LAB_18000150f:
  LOCK();
  *(int *)(puVar4 + 0x5c) = *(int *)(puVar4 + 0x5c) + -1;
  UNLOCK();
  puVar4[0x65] = 0;
  if (iVar3 != 0) {
    FUN_18005f814((undefined1 *)&DAT_18006c8a0,0,0x50);
    DAT_18006c8e4 = 1;
    DAT_18006c8e0 = 1;
  }
  return iVar3 != 0;
}

