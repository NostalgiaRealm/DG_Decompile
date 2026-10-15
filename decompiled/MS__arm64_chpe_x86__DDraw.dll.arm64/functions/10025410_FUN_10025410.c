/*
 * FUN_10025410 at 10025410
 * undefined FUN_10025410(void)
 * Address ranges: 10025410-10025557
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10025410(int param_1,undefined4 param_2)

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
  FUN_1008fd30(puVar2);
  if (*(char *)(iVar4 + 0x12ec) != '\0') {
    puVar7 = (undefined4 *)FUN_1008fbd8(puVar2,0x408);
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
      FUN_100917a0(uVar3,param_2,0x400);
      *(undefined4 *)(uVar3 + 0x400) = 0;
      *puVar7 = FUN_10025560;
      puVar2[*(int *)(iVar4 + 0x12e4) * 5 + 0x1a] = (undefined4 *)(uVar3 + 0x400);
      if (*(char *)(iVar4 + 0x12ed) != '\0') {
        *puVar2 = 0;
        (*(code *)PTR_FUN_100ba12c)(*(undefined4 *)(iVar4 + 0x1220));
        return;
      }
      goto LAB_10025544;
    }
    *puVar2 = 0;
    (*(code *)PTR_FUN_100ba144)(100);
    FUN_1008fd30(puVar2);
  }
  puVar7 = *(undefined4 **)(iVar4 + 0x12d0);
  *puVar7 = param_2;
  puVar7[1] = param_1 + -0xc0;
  FUN_10025560(puVar7);
LAB_10025544:
  *puVar2 = 0;
  return;
}

