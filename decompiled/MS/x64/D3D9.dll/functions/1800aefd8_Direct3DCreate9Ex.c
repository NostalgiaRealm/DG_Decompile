/*
 * Direct3DCreate9Ex at 1800aefd8
 * ulonglong __fastcall Direct3DCreate9Ex(uint param_1, undefined8 * param_2)
 * Address ranges: 1800aefd8-1800af114
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong Direct3DCreate9Ex(uint param_1,undefined8 *param_2)

{
  bool bVar1;
  FARPROC pFVar2;
  WNDPROC pWVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint local_res10 [6];
  
                    /* 0xaefd8  10  Direct3DCreate9Ex */
  pFVar2 = DAT_180117450;
  *param_2 = 0;
  if ((pFVar2 != (FARPROC)0x0) ||
     (pFVar2 = FUN_1800ad364("Direct3DCreate9Ex"), DAT_180117450 = pFVar2, pFVar2 != (FARPROC)0x0))
  {
    uVar7 = (*pFVar2)((ulonglong)param_1,param_2);
    return uVar7 & 0xffffffff;
  }
  FUN_18002ebbc();
  FUN_1800fa780(local_res10);
  uVar7 = 0x80004005;
  bVar1 = FUN_18002dc48();
  if (bVar1) {
    FUN_1800acbe0();
    pWVar3 = FUN_1800f80a0();
    if (pWVar3 != (WNDPROC)0x0) {
      FUN_1800f9b8c((longlong *)(pWVar3 + 0x78),0x180111db0);
      FUN_1800f8148((undefined8 *)pWVar3);
    }
    FUN_180019018();
    puVar4 = (undefined8 *)FUN_1800fbccc(0x100);
    if ((puVar4 != (undefined8 *)0x0) &&
       (puVar4 = FUN_1800ad58c(puVar4,param_1,'\x01'), puVar4 != (undefined8 *)0x0)) {
      uVar5 = FUN_180003b74((longlong)puVar4);
      if ((char)uVar5 != '\0') {
        FUN_1800ad878((longlong)puVar4);
        FUN_1800011d8((longlong)puVar4);
        uVar6 = FUN_1800aed38((uint *)(puVar4 + 0x15),(longlong *)&DAT_1800fd740,param_2,(int *)0x0)
        ;
        uVar7 = uVar6 & 0xffffffff;
        if (-1 < (int)uVar6) goto LAB_1800af0c8;
        FUN_1800adc18((longlong)puVar4);
      }
      FUN_1800ad7b8(puVar4);
      FUN_1800fbcf0(puVar4);
    }
    uVar5 = FUN_1800020f0();
    if ((char)uVar5 != '\0') {
      FUN_1800af334();
    }
  }
LAB_1800af0c8:
  FUN_1800fa7bc();
  return uVar7;
}

