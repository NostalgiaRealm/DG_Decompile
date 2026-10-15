/*
 * FUN_10023b06 at 10023b06
 * int __fastcall FUN_10023b06(undefined * param_1, undefined4 param_2)
 * Address ranges: 10023b06-10023bef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_10023b06(undefined *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  bool bVar2;
  FARPROC pFVar3;
  int iVar4;
  BOOL BVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined4 local_40c [128];
  undefined4 local_20c;
  undefined4 local_208;
  code *local_c;
  undefined4 local_8;
  
  local_c = (code *)param_1;
  local_8 = param_2;
  pFVar3 = FUN_10023885("DirectDrawEnumerateA");
  if (pFVar3 == (FARPROC)0x0) {
    BVar5 = TryEnterCriticalSection(DAT_1006c254);
    if (BVar5 == 0) {
      FUN_10001a5c((PRTL_CRITICAL_SECTION_DEBUG)0x0);
    }
    FUN_10002949();
    iVar4 = -0x7ff8ffa9;
    if (param_1 != (undefined *)0x0) {
      iVar4 = -0x7fffbffb;
      bVar2 = FUN_10001b8b();
      if (bVar2) {
        FUN_10028f7c();
        FUN_10002dae();
        uVar1 = local_8;
        uVar6 = 0;
LAB_10023b75:
        if ((&DAT_1006c498)[uVar6 * 0x228] == '\0') goto code_r0x10023b84;
        local_20c = 0x70736964;
        local_208 = 0x79616c;
        pcVar7 = "dgVoodoo DX API Layer";
        puVar8 = local_40c;
        for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar8 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          puVar8 = puVar8 + 1;
        }
        iVar4 = 0;
        *(undefined2 *)puVar8 = *(undefined2 *)pcVar7;
        (*local_c)(0,local_40c,&local_20c,uVar1);
LAB_10023bcb:
        if (DAT_1006c23c == 0) {
          FUN_10028fc4();
          FUN_10001cd7();
        }
      }
    }
    LeaveCriticalSection(DAT_1006c254);
  }
  else {
    iVar4 = (*pFVar3)(param_1,param_2);
  }
  return iVar4;
code_r0x10023b84:
  uVar6 = uVar6 + 1;
  if (0x1f < uVar6) goto LAB_10023bcb;
  goto LAB_10023b75;
}

