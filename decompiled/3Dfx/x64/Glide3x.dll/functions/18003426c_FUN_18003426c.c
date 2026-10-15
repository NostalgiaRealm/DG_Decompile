/*
 * FUN_18003426c at 18003426c
 * char __fastcall FUN_18003426c(int * param_1, LPCWSTR param_2, undefined4 * param_3)
 * Address ranges: 18003426c-180034486
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

char FUN_18003426c(int *param_1,LPCWSTR param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  int *piVar13;
  longlong local_2518 [4];
  longlong local_24f8;
  undefined4 local_24f0;
  undefined4 local_24ec;
  undefined4 local_24e8;
  char *local_24e0;
  undefined4 local_24d8;
  undefined8 local_24d0;
  undefined8 local_2448 [66];
  undefined8 local_2238 [66];
  CHAR local_2028 [8184];
  undefined8 uStack_30;
  
  uStack_30 = 0x180034285;
  WideCharToMultiByte(0,0x200,param_2,-1,local_2028,0x1ffe,(LPCSTR)0x0,(LPBOOL)0x0);
  FUN_180003454(local_2238);
  FUN_1800607a0(local_2518,param_2,'\0');
  uVar6 = FUN_1800608d0((longlong)local_2518);
  cVar4 = '\0';
  if ((char)uVar6 != '\0') {
    cVar4 = FUN_18003a10c(param_1,local_2518,(ulonglong)param_3);
    if (cVar4 == '\0') {
      FUN_180034b68(&local_24f8);
      if (param_3 != (undefined4 *)0x0) {
        local_24f0 = *param_3;
        local_24ec = param_3[1];
        local_24e8 = param_3[2];
        local_24e0 = "[dgVoodoo IniParser] ";
        local_24d8 = param_3[6];
        local_24d0 = 0;
      }
      bVar5 = FUN_180034c4c((longlong)&local_24f8,local_2518,1);
      if (bVar5 != 0) {
        cVar4 = FUN_180039f4c((undefined4 *)local_2238,&local_24f8,(ulonglong)param_3);
        lVar12 = 4;
        if (cVar4 == '\0') {
          FUN_180060f94((undefined1 *)local_2448,0,0x20c);
          puVar8 = FUN_180003454(local_2448);
        }
        else {
          lVar11 = 4;
          puVar8 = local_2448;
          puVar9 = local_2238;
          do {
            puVar10 = puVar9;
            puVar7 = puVar8;
            uVar6 = puVar10[1];
            uVar1 = puVar10[2];
            uVar2 = puVar10[3];
            *puVar7 = *puVar10;
            puVar7[1] = uVar6;
            uVar6 = puVar10[4];
            uVar3 = puVar10[5];
            puVar7[2] = uVar1;
            puVar7[3] = uVar2;
            uVar1 = puVar10[6];
            uVar2 = puVar10[7];
            puVar7[4] = uVar6;
            puVar7[5] = uVar3;
            uVar6 = puVar10[8];
            uVar3 = puVar10[9];
            puVar7[6] = uVar1;
            puVar7[7] = uVar2;
            uVar1 = puVar10[10];
            uVar2 = puVar10[0xb];
            puVar7[8] = uVar6;
            puVar7[9] = uVar3;
            uVar6 = puVar10[0xc];
            uVar3 = puVar10[0xd];
            puVar7[10] = uVar1;
            puVar7[0xb] = uVar2;
            uVar1 = puVar10[0xe];
            uVar2 = puVar10[0xf];
            puVar7[0xc] = uVar6;
            puVar7[0xd] = uVar3;
            puVar7[0xe] = uVar1;
            puVar7[0xf] = uVar2;
            lVar11 = lVar11 + -1;
            puVar8 = puVar7 + 0x10;
            puVar9 = puVar10 + 0x10;
          } while (lVar11 != 0);
          uVar6 = *(undefined8 *)((longlong)puVar10 + 0x84);
          *(undefined8 *)((longlong)puVar7 + 0x7c) = *(undefined8 *)((longlong)puVar10 + 0x7c);
          *(undefined8 *)((longlong)puVar7 + 0x84) = uVar6;
          puVar8 = local_2448;
        }
        do {
          piVar13 = param_1;
          puVar9 = puVar8;
          uVar6 = puVar9[1];
          *(undefined8 *)piVar13 = *puVar9;
          *(undefined8 *)(piVar13 + 2) = uVar6;
          uVar6 = puVar9[3];
          *(undefined8 *)(piVar13 + 4) = puVar9[2];
          *(undefined8 *)(piVar13 + 6) = uVar6;
          uVar6 = puVar9[5];
          *(undefined8 *)(piVar13 + 8) = puVar9[4];
          *(undefined8 *)(piVar13 + 10) = uVar6;
          uVar6 = puVar9[7];
          *(undefined8 *)(piVar13 + 0xc) = puVar9[6];
          *(undefined8 *)(piVar13 + 0xe) = uVar6;
          uVar6 = puVar9[9];
          *(undefined8 *)(piVar13 + 0x10) = puVar9[8];
          *(undefined8 *)(piVar13 + 0x12) = uVar6;
          uVar6 = puVar9[0xb];
          *(undefined8 *)(piVar13 + 0x14) = puVar9[10];
          *(undefined8 *)(piVar13 + 0x16) = uVar6;
          uVar6 = puVar9[0xd];
          *(undefined8 *)(piVar13 + 0x18) = puVar9[0xc];
          *(undefined8 *)(piVar13 + 0x1a) = uVar6;
          uVar6 = puVar9[0xf];
          *(undefined8 *)(piVar13 + 0x1c) = puVar9[0xe];
          *(undefined8 *)(piVar13 + 0x1e) = uVar6;
          lVar12 = lVar12 + -1;
          puVar8 = puVar9 + 0x10;
          param_1 = piVar13 + 0x20;
        } while (lVar12 != 0);
        uVar6 = *(undefined8 *)((longlong)puVar9 + 0x84);
        *(undefined8 *)(piVar13 + 0x1f) = *(undefined8 *)((longlong)puVar9 + 0x7c);
        *(undefined8 *)(piVar13 + 0x21) = uVar6;
      }
      FUN_180034c0c(&local_24f8);
    }
  }
  FUN_180060820(local_2518);
  return cVar4;
}

