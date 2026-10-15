/*
 * FUN_1001d3c0 at 1001d3c0
 * undefined __thiscall FUN_1001d3c0(void * this, int param_1)
 * Address ranges: 1001d3c0-1001d429
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001d3c0(void *this,int param_1)

{
  void *this_00;
  uint uVar1;
  undefined8 uVar2;
  LARGE_INTEGER local_c;
  
  this_00 = *(void **)((int)this + 0x315c);
  local_c.s.LowPart = (DWORD)this;
  local_c.s.HighPart = (LONG)this;
  QueryPerformanceCounter(&local_c);
  FUN_1001b7e8(this_00,(uint *)&local_c);
  uVar2 = __alldiv(local_c.s.LowPart - *(uint *)((int)this_00 + 0x18),
                   (local_c.s.HighPart - *(int *)((int)this_00 + 0x1c)) -
                   (uint)(local_c.s.LowPart < *(void **)((int)this_00 + 0x18)),
                   *(uint *)((int)this_00 + 0x10),*(uint *)((int)this_00 + 0x14));
  *(int *)((int)this_00 + 0xb8) = (int)uVar2;
  uVar1 = 1;
  do {
    *(int *)(param_1 + -4 + uVar1 * 4) =
         *(int *)((int)this_00 + uVar1 * 0x10 + 0xa8) - *(int *)((int)this_00 + uVar1 * 0x10 + 0xb8)
    ;
    uVar1 = uVar1 + 1;
  } while (uVar1 < 7);
  return;
}

