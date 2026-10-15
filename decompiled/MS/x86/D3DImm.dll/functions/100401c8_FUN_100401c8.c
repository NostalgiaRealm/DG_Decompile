/*
 * FUN_100401c8 at 100401c8
 * undefined4 __thiscall FUN_100401c8(void * this, int param_1, int param_2)
 * Address ranges: 100401c8-100402e8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_100401c8(void *this,int param_1,int param_2)

{
  int *piVar1;
  BOOL BVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint local_1c;
  uint local_18;
  uint local_14;
  int *local_10;
  uint local_c;
  
  BVar2 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar2 == 0) {
    FUN_1003c603();
  }
  uVar4 = 0x80070057;
  if ((param_1 != 0) && (param_2 != 0)) {
    local_1c = *(uint *)(*(int *)(param_1 + 4) + 0x60);
    local_18 = *(uint *)(*(int *)(param_2 + 4) + 0x60);
    local_10 = (int *)FUN_10042906((void *)((int)this + 0x17c8),&local_1c);
    puVar3 = (uint *)FUN_10042906((void *)((int)this + 0x17c8),&local_18);
    if ((local_10 != (int *)0x0) && (puVar3 != (uint *)0x0)) {
      local_14 = *puVar3;
      piVar1 = (int *)*local_10;
      local_10 = piVar1;
      local_c = local_14;
      FUN_10042945((void *)((int)this + 0x17c8),&local_1c,&local_14);
      FUN_10042945((void *)((int)this + 0x17c8),&local_18,&local_10);
      FUN_100429b7((void *)((int)this + 0x17b8),&local_14,&local_1c);
      FUN_100429b7((void *)((int)this + 0x17b8),(uint *)&local_10,&local_18);
      if (*(uint *)((int)this + 0x294) == local_c) {
        *(int **)((int)this + 0x294) = piVar1;
      }
      else if ((int *)*(uint *)((int)this + 0x294) == piVar1) {
        *(uint *)((int)this + 0x294) = local_c;
      }
      uVar4 = 0;
    }
  }
  LeaveCriticalSection(DAT_1006bbd0);
  return uVar4;
}

