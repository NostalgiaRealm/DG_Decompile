/*
 * FUN_1009f760 at 1009f760
 * undefined FUN_1009f760(void)
 * Address ranges: 1009f760-1009f8a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1009f760(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined4 *puVar7;
  
  if (*(int *)(param_1 + -0xb8) == 0) {
    return;
  }
  iVar4 = *(int *)(param_1 + -0x7c);
  puVar2 = (undefined4 *)(iVar4 + 0x11c0);
  FUN_100fd300(puVar2);
  if (*(char *)(iVar4 + 0x12ec) != '\0') {
    puVar7 = (undefined4 *)FUN_100fd1a8(puVar2,0x408);
    if (puVar7 != (undefined4 *)0x0) {
      piVar1 = (int *)(iVar4 + 0x12e8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      DataMemoryBarrier(2,3);
      puVar7[1] = 0x408;
      puVar7[3] = param_1 + -0xc0;
      uVar3 = (int)puVar7 + 0x13U & 0xfffffffc;
      puVar7[2] = uVar3;
      FUN_100ff660(uVar3,param_2,0x400);
      *(undefined4 *)(uVar3 + 0x400) = 0;
      *puVar7 = FUN_1009f8b0;
      puVar2[*(int *)(iVar4 + 0x12e4) * 5 + 0x1a] = (undefined4 *)(uVar3 + 0x400);
      if (*(char *)(iVar4 + 0x12ed) != '\0') {
        *puVar2 = 0;
        (*(code *)PTR_FUN_101340fc)(*(undefined4 *)(iVar4 + 0x1220));
        return;
      }
      goto LAB_1009f894;
    }
    *puVar2 = 0;
    (*(code *)PTR_FUN_10134114)(100);
    FUN_100fd300(puVar2);
  }
  puVar7 = *(undefined4 **)(iVar4 + 0x12d0);
  *puVar7 = param_2;
  puVar7[1] = param_1 + -0xc0;
  FUN_1009f8b0(puVar7);
LAB_1009f894:
  *puVar2 = 0;
  return;
}

