/*
 * Direct3DCreate9 at 1800aee6c
 * INT_PTR __fastcall Direct3DCreate9(uint param_1)
 * Address ranges: 1800aee6c-1800aefd6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

INT_PTR Direct3DCreate9(uint param_1)

{
  bool bVar1;
  WNDPROC pWVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  INT_PTR IVar5;
  uint local_res10 [2];
  INT_PTR local_res18;
  
                    /* 0xaee6c  9  Direct3DCreate9 */
  IVar5 = 0;
  local_res18 = 0;
  if ((DAT_180117458 == (FARPROC)0x0) &&
     (DAT_180117458 = FUN_1800ad364("Direct3DCreate9"), DAT_180117458 == (FARPROC)0x0)) {
    if (1 < (param_1 & 0x7fffffff) - 0x1f) {
      return 0;
    }
    FUN_18002ebbc();
    FUN_1800fa780(local_res10);
    bVar1 = FUN_18002dc48();
    if (bVar1) {
      FUN_1800acbe0();
      pWVar2 = FUN_1800f80a0();
      if (pWVar2 != (WNDPROC)0x0) {
        FUN_1800f9b8c((longlong *)(pWVar2 + 0x78),0x180111db0);
        FUN_1800f8148((undefined8 *)pWVar2);
      }
      FUN_180019018();
      puVar3 = (undefined8 *)FUN_1800fbccc(0x100);
      if ((puVar3 != (undefined8 *)0x0) &&
         (puVar3 = FUN_1800ad58c(puVar3,param_1,'\0'), puVar3 != (undefined8 *)0x0)) {
        uVar4 = FUN_180003b74((longlong)puVar3);
        if ((char)uVar4 != '\0') {
          FUN_1800ad878((longlong)puVar3);
          FUN_1800011d8((longlong)puVar3);
          uVar4 = FUN_1800aed38((uint *)(puVar3 + 0x15),(longlong *)&DAT_1800fd650,&local_res18,
                                (int *)0x0);
          if (-1 < (int)uVar4) {
            FUN_1800fa7bc();
            return local_res18;
          }
          FUN_1800adc18((longlong)puVar3);
          IVar5 = local_res18;
        }
        FUN_1800ad7b8(puVar3);
        FUN_1800fbcf0(puVar3);
      }
      uVar4 = FUN_1800020f0();
      if ((char)uVar4 != '\0') {
        FUN_1800af334();
      }
    }
    FUN_1800fa7bc();
    return IVar5;
  }
  IVar5 = (*DAT_180117458)((ulonglong)param_1);
  return IVar5;
}

