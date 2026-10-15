/*
 * _grSstScreenWidth@0 at 1800017cc
 * int __fastcall _grSstScreenWidth@0(void)
 * Address ranges: 1800017cc-1800017f9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int _grSstScreenWidth_0(void)

{
  int iVar1;
  undefined *puVar2;
  
                    /* 0x17cc  75  _grSstScreenWidth@0
                       0x17cc  232  grSstScreenWidth */
  puVar2 = FUN_180015044();
  if (puVar2[100] != '\0') {
    return *(int *)(*(longlong *)(puVar2 + 0x18) + 0xa8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001800017f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetSystemMetrics(0x4e);
  return iVar1;
}

