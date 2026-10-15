/*
 * FUN_100400a7 at 100400a7
 * undefined4 __thiscall FUN_100400a7(void * this, int param_1, int param_2)
 * Address ranges: 100400a7-100401c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_100400a7(void *this,int param_1,int param_2)

{
  undefined4 *puVar1;
  BOOL BVar2;
  int *piVar3;
  undefined4 uVar4;
  uint local_1c;
  uint local_18;
  uint local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  
  BVar2 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar2 == 0) {
    FUN_1003c603();
  }
  uVar4 = 0x80070057;
  if ((param_1 != 0) && (param_2 != 0)) {
    local_18 = *(uint *)(*(int *)(param_1 + 4) + 0x60);
    local_1c = *(uint *)(*(int *)(param_2 + 4) + 0x60);
    local_10 = (undefined4 *)FUN_10042906((void *)((int)this + 0x17c8),&local_18);
    piVar3 = (int *)FUN_10042906((void *)((int)this + 0x17c8),&local_1c);
    if ((local_10 != (undefined4 *)0x0) && (piVar3 != (int *)0x0)) {
      puVar1 = (undefined4 *)*piVar3;
      local_14 = *local_10;
      local_10 = puVar1;
      local_c = (undefined4 *)local_14;
      FUN_10042945((void *)((int)this + 0x17c8),&local_18,&local_10);
      FUN_10042945((void *)((int)this + 0x17c8),&local_1c,&local_14);
      FUN_100429b7((void *)((int)this + 0x17b8),&local_14,&local_1c);
      FUN_100429b7((void *)((int)this + 0x17b8),(uint *)&local_10,&local_18);
      if (*(undefined4 **)((int)this + 0x294) == local_c) {
        *(undefined4 **)((int)this + 0x294) = puVar1;
      }
      else if (*(undefined4 **)((int)this + 0x294) == puVar1) {
        *(undefined4 **)((int)this + 0x294) = local_c;
      }
      uVar4 = 0;
    }
  }
  LeaveCriticalSection(DAT_1006bbd0);
  return uVar4;
}

