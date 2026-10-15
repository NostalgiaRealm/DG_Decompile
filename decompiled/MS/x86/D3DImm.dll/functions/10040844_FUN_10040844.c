/*
 * FUN_10040844 at 10040844
 * undefined4 __thiscall FUN_10040844(void * this, uint param_1, undefined4 * * param_2)
 * Address ranges: 10040844-10040930
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 __thiscall FUN_10040844(void *this,uint param_1,undefined4 **param_2)

{
  int iVar1;
  byte *pbVar2;
  BOOL BVar3;
  undefined4 uVar4;
  ushort in_FPUControlWord;
  void *local_c;
  void **local_8;
  
  uVar4 = 0x80070057;
  if (((param_1 != 0) && (param_1 < 0x99)) &&
     (*(char *)(*(int *)((int)this + 4) + param_1 * 8) != '\0')) {
    local_c = this;
    local_8 = this;
    BVar3 = TryEnterCriticalSection(DAT_1006bbd0);
    if (BVar3 == 0) {
      FUN_1003c603();
    }
    if (*(char *)((int)this + 0x224) == '\0') {
      local_8 = &local_c;
      local_c = (void *)(in_FPUControlWord | 0x80000000);
      if ((in_FPUControlWord & 0xf3f) != 0x23f) {
        local_c = (void *)(uint)in_FPUControlWord;
      }
      FUN_1003e51d(this,param_1,(uint)param_2);
    }
    else {
      iVar1 = *(int *)(*(int *)((int)this + 0x214) + *(int *)((int)this + 0x220) * 4);
      *(undefined4 ***)(iVar1 + 8 + param_1 * 4) = param_2;
      pbVar2 = (byte *)(iVar1 + 0xa1c + (param_1 >> 5) * 4 + ((int)(param_1 & 0x1f) >> 3));
      *pbVar2 = *pbVar2 | '\x01' << (param_1 & 7);
    }
    uVar4 = 0;
    LeaveCriticalSection(DAT_1006bbd0);
  }
  return uVar4;
}

