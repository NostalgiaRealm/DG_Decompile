/*
 * _grSstScreenHeight@0 at 18000179c
 * int __fastcall _grSstScreenHeight@0(void)
 * Address ranges: 18000179c-1800017c9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int _grSstScreenHeight_0(void)

{
  int iVar1;
  undefined *puVar2;
  
                    /* 0x179c  80  _grSstScreenHeight@0
                       0x179c  241  grSstScreenHeight */
  puVar2 = FUN_180015384();
  if (puVar2[100] != '\0') {
    return *(int *)(*(longlong *)(puVar2 + 0x18) + 0xac);
  }
                    /* WARNING: Could not recover jumptable at 0x0001800017c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetSystemMetrics(0x4f);
  return iVar1;
}

