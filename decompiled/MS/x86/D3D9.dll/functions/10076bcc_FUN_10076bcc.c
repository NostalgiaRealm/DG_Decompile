/*
 * FUN_10076bcc at 10076bcc
 * bool __thiscall FUN_10076bcc(void * this, undefined4 * param_1, undefined4 * param_2, undefined4 * param_3, undefined4 * param_4, uint param_5)
 * Address ranges: 10076bcc-10076c2a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall
FUN_10076bcc(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,
            undefined4 *param_4,uint param_5)

{
  if (param_5 < 0xe) {
    *param_1 = *(undefined4 *)((int)this + *(char *)((int)this + param_5 * 4 + 0x3c) * 4 + 0x1d0dc);
    *param_2 = *(undefined4 *)((int)this + *(char *)((int)this + param_5 * 4 + 0x3d) * 4 + 0x1d0dc);
    *param_3 = *(undefined4 *)((int)this + *(char *)((int)this + param_5 * 4 + 0x3e) * 4 + 0x1d0dc);
    *param_4 = *(undefined4 *)((int)this + *(char *)((int)this + param_5 * 4 + 0x3f) * 4 + 0x1d0dc);
  }
  return param_5 < 0xe;
}

