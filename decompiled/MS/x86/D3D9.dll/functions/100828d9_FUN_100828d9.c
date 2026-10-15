/*
 * FUN_100828d9 at 100828d9
 * bool __fastcall FUN_100828d9(void * param_1)
 * Address ranges: 100828d9-10082973
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_100828d9(void *param_1)

{
  int iVar1;
  void *this;
  bool bVar2;
  undefined4 local_18;
  int local_14;
  int local_c;
  int local_8;
  
  iVar1 = FUN_10082974((int)param_1);
  if ((char)iVar1 == '\0') {
    bVar2 = false;
    if (*(int *)((int)param_1 + 0x90) == 0) {
      FUN_1008f5b4(this,&local_18);
      FUN_10081718((void *)((int)param_1 + 0x84),*(uint *)((int)param_1 + 0x14),
                   *(uint *)((int)param_1 + 0x18),*(uint *)((int)param_1 + 0x20),
                   *(uint *)((int)param_1 + 0x24),1,local_18,local_14,0,0x1688,0x1688,local_c,
                   local_8,'\0','\0',0,0);
      FUN_10082845(param_1);
      bVar2 = *(int *)((int)param_1 + 0x90) == 0;
    }
  }
  else {
    bVar2 = false;
    if (*(int *)((int)param_1 + 0x98) == 0) {
      *(undefined1 *)((int)param_1 + 0xbc) = 1;
      FUN_10081083((void *)((int)param_1 + 0x84),*(int *)((int)param_1 + 0x20),
                   *(int *)((int)param_1 + 0x24));
      FUN_10082845(param_1);
      bVar2 = *(int *)((int)param_1 + 0x98) == 0;
    }
  }
  return !bVar2;
}

