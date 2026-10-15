/*
 * FUN_180047e6c at 180047e6c
 * ulonglong __fastcall FUN_180047e6c(ulonglong param_1, longlong * param_2)
 * Address ranges: 180047e6c-180047f2a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180047e6c(ulonglong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  char extraout_AL;
  ulonglong uVar3;
  FARPROC pFVar4;
  undefined7 uVar5;
  undefined7 extraout_var;
  uint uVar6;
  
  uVar3 = FUN_18005035c(param_1);
  if ((char)uVar3 != '\0') {
    pFVar4 = GetProcAddress(*(HMODULE *)(param_1 + 0x2d8),"D3D12SerializeRootSignature");
    *(FARPROC *)(param_1 + 0x8d0) = pFVar4;
    if (pFVar4 != (FARPROC)0x0) {
      *(undefined1 *)(param_1 + 0x312) = 0;
      if (param_2 != (longlong *)0x0) {
        pFVar4 = (FARPROC)FUN_180059980(param_1 + 0x6b0,param_2);
      }
      uVar3 = 0;
      uVar5 = (undefined7)((ulonglong)pFVar4 >> 8);
      cVar2 = '\x01';
      if (*(int *)(param_1 + 0x6c8) == 0) {
LAB_180047f0d:
        return CONCAT71(uVar5,1);
      }
      do {
        if (cVar2 == '\0') goto LAB_180047f11;
        puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x6c0) + uVar3 * 8);
        (**(code **)*puVar1)
                  (puVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x6b8) + 0x2d8),param_1 + 0x6b0);
        uVar6 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar6;
        cVar2 = extraout_AL;
      } while (uVar6 < *(uint *)(param_1 + 0x6c8));
      uVar5 = extraout_var;
      if (extraout_AL != '\0') goto LAB_180047f0d;
    }
LAB_180047f11:
    uVar3 = FUN_180050638(param_1);
  }
  return uVar3 & 0xffffffffffffff00;
}

