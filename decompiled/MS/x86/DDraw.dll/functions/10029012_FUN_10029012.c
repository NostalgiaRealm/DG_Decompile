/*
 * FUN_10029012 at 10029012
 * undefined4 * __thiscall FUN_10029012(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 10029012-10029079
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_10029012(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  FUN_10060d45((int *)((int)this + 0xc),0,0x38);
  puVar1 = (undefined4 *)((int)this + 0x44);
  *(undefined ***)this = &PTR_FUN_1006460c;
  *puVar1 = 0;
  *(undefined4 *)((int)this + 0x48) = param_1;
  *(undefined4 *)((int)this + 0x4c) = param_2;
  *(undefined4 *)((int)this + 0x50) = param_3;
  *(undefined4 *)((int)this + 0x54) = param_4;
  FUN_10023421((void *)((int)this + 4),&DAT_10062560,(int)puVar1);
  FUN_10023421((void *)((int)this + 4),&DAT_10062570,(int)puVar1);
  return this;
}

