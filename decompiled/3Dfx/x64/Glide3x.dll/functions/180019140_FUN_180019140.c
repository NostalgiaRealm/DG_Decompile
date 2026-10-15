/*
 * FUN_180019140 at 180019140
 * undefined __fastcall FUN_180019140(longlong * param_1, char param_2, byte param_3)
 * Address ranges: 180019140-1800192c0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180019140(longlong *param_1,char param_2,byte param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  DWORD DVar8;
  
  uVar2 = FUN_180014854(param_1,*(int *)(param_1[0x28] + 0x29fc));
  uVar3 = FUN_180014854(param_1,*(int *)(param_1[0x28] + 0x2a00));
  uVar6 = 0;
  do {
    if (((param_2 != '\0') || (uVar6 == uVar2)) || (uVar6 == uVar3)) {
      uVar4 = (ulonglong)uVar6;
      lVar7 = uVar4 * 0x170;
      if ((*(byte *)((longlong)param_1 + lVar7 + 0x1e2) & 1) != 0) {
        plVar5 = param_1 + uVar4 * 0x2e + 0x29;
        if ((*(int *)((longlong)param_1 + lVar7 + 0x1bc) == 0) &&
           ((int)param_1[uVar4 * 0x2e + 0x38] == 0)) {
          FUN_180018414(param_1,plVar5,1,0);
          pbVar1 = (byte *)((longlong)param_1 + lVar7 + 0x1e2);
          *pbVar1 = *pbVar1 & 0xfe;
        }
        else {
          FUN_1800146d4(param_1,uVar6,1,0,0,(LONG)param_1[uVar4 * 0x2e + 0x2d],
                        *(LONG *)((longlong)param_1 + lVar7 + 0x16c),0);
          FUN_180018414(param_1,plVar5,1,0);
          DVar8 = *(DWORD *)((longlong)param_1 + lVar7 + 0x1b4);
          FUN_180014520(param_1,uVar6,DVar8,(int)param_1[uVar4 * 0x2e + 0x37],
                        *(char *)((longlong)param_1 + lVar7 + 0x1dd),
                        *(char *)((longlong)param_1 + lVar7 + 0x1e1),'\0','\0',
                        *(undefined1 *)((longlong)param_1 + lVar7 + 0x1df),
                        *(undefined4 *)((longlong)param_1 + lVar7 + 0x1d4),
                        (int)param_1[uVar4 * 0x2e + 0x3b]);
          FUN_18001a188((longlong)plVar5,*(int *)((longlong)param_1 + lVar7 + 0x16c),DVar8);
        }
      }
      pbVar1 = (byte *)((longlong)param_1 + lVar7 + 0x1e2);
      *pbVar1 = *pbVar1 | param_3;
    }
    uVar6 = uVar6 + 1;
  } while ((int)uVar6 < 7);
  return;
}

