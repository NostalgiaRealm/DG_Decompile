/*
 * FUN_10057629 at 10057629
 * undefined __thiscall FUN_10057629(void * this, undefined4 * param_1, uint param_2)
 * Address ranges: 10057629-10057662
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10057629(void *this,undefined4 *param_1,uint param_2)

{
  if (*(char *)((int)this + 0xc) != '\0') {
    if (*(uint *)((int)this + 8) < (*(int *)((int)this + 4) - *(int *)this) + param_2) {
      FUN_100575d3(this,param_2);
    }
    FUN_10060d80(*(undefined4 **)((int)this + 4),param_1,param_2);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_2;
  }
  return;
}

