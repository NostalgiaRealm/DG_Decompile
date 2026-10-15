/*
 * FUN_1800ce0dc at 1800ce0dc
 * undefined1 __fastcall FUN_1800ce0dc(int * param_1, longlong * param_2, ulonglong param_3)
 * Address ranges: 1800ce0dc-1800cec4d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_1800ce0dc(int *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  longlong lVar9;
  int *piVar10;
  undefined1 uVar11;
  int local_res10;
  int local_res14;
  ulonglong local_res18 [2];
  int local_248;
  int local_244;
  int local_240 [134];
  
  local_res18[0] = param_3 & 0xffffffff00000000;
  uVar11 = 0;
  iVar6 = (**(code **)*param_2)(param_2,0,0,0);
  if (iVar6 == 0) {
    iVar6 = (**(code **)(*param_2 + 0x18))(param_2);
    local_res14 = 0x287;
    local_res10 = 0x45474544;
    iVar7 = (**(code **)(*param_2 + 8))(param_2,8,&local_res10,local_res18);
    if (iVar7 == 0) {
      if (iVar6 == 0x214) {
        local_248 = 0x45474544;
        local_244 = 0x287;
        FUN_1800c9fcc((undefined8 *)local_240);
        local_248 = local_res10;
        local_244 = local_res14;
        iVar6 = (**(code **)(*param_2 + 8))(param_2,0x20c,local_240,local_res18);
        if (iVar6 != 0) {
          return 0;
        }
        if (local_248 != 0x45474544) {
          return 0;
        }
        if (local_244 != 0x287) {
          return 0;
        }
        lVar9 = 4;
        piVar5 = local_240;
        do {
          piVar10 = param_1;
          piVar8 = piVar5;
          uVar1 = *(undefined8 *)(piVar8 + 2);
          uVar2 = *(undefined8 *)(piVar8 + 4);
          uVar3 = *(undefined8 *)(piVar8 + 6);
          *(undefined8 *)piVar10 = *(undefined8 *)piVar8;
          *(undefined8 *)(piVar10 + 2) = uVar1;
          uVar1 = *(undefined8 *)(piVar8 + 8);
          uVar4 = *(undefined8 *)(piVar8 + 10);
          *(undefined8 *)(piVar10 + 4) = uVar2;
          *(undefined8 *)(piVar10 + 6) = uVar3;
          uVar2 = *(undefined8 *)(piVar8 + 0xc);
          uVar3 = *(undefined8 *)(piVar8 + 0xe);
          *(undefined8 *)(piVar10 + 8) = uVar1;
          *(undefined8 *)(piVar10 + 10) = uVar4;
          uVar1 = *(undefined8 *)(piVar8 + 0x10);
          uVar4 = *(undefined8 *)(piVar8 + 0x12);
          *(undefined8 *)(piVar10 + 0xc) = uVar2;
          *(undefined8 *)(piVar10 + 0xe) = uVar3;
          uVar2 = *(undefined8 *)(piVar8 + 0x14);
          uVar3 = *(undefined8 *)(piVar8 + 0x16);
          *(undefined8 *)(piVar10 + 0x10) = uVar1;
          *(undefined8 *)(piVar10 + 0x12) = uVar4;
          uVar1 = *(undefined8 *)(piVar8 + 0x18);
          uVar4 = *(undefined8 *)(piVar8 + 0x1a);
          *(undefined8 *)(piVar10 + 0x14) = uVar2;
          *(undefined8 *)(piVar10 + 0x16) = uVar3;
          uVar2 = *(undefined8 *)(piVar8 + 0x1c);
          uVar3 = *(undefined8 *)(piVar8 + 0x1e);
          *(undefined8 *)(piVar10 + 0x18) = uVar1;
          *(undefined8 *)(piVar10 + 0x1a) = uVar4;
          *(undefined8 *)(piVar10 + 0x1c) = uVar2;
          *(undefined8 *)(piVar10 + 0x1e) = uVar3;
          lVar9 = lVar9 + -1;
          piVar5 = piVar8 + 0x20;
          param_1 = piVar10 + 0x20;
        } while (lVar9 != 0);
        uVar1 = *(undefined8 *)(piVar8 + 0x21);
        *(undefined8 *)(piVar10 + 0x1f) = *(undefined8 *)(piVar8 + 0x1f);
        *(undefined8 *)(piVar10 + 0x21) = uVar1;
      }
      else if (iVar6 == 0x210) {
        FUN_1800cec50(&local_248);
        local_248 = local_res10;
        local_244 = local_res14;
        iVar6 = (**(code **)(*param_2 + 8))(param_2,0x208,local_240,local_res18);
        if (iVar6 != 0) {
          return 0;
        }
        if (local_248 != 0x45474544) {
          return 0;
        }
        if (local_244 != 0x286) {
          return 0;
        }
        FUN_1800d2844(param_1,local_240);
      }
      else if (iVar6 == 0x20f) {
        FUN_1800cee10(&local_248);
        local_248 = local_res10;
        local_244 = local_res14;
        iVar6 = (**(code **)(*param_2 + 8))(param_2,0x207,local_240,local_res18);
        if (iVar6 != 0) {
          return 0;
        }
        if (local_248 != 0x45474544) {
          return 0;
        }
        if (local_244 != 0x285) {
          return 0;
        }
        FUN_1800d2cac(param_1,local_240);
      }
      else if (iVar6 == 0x20d) {
        FUN_1800cefd0(&local_248);
        local_248 = local_res10;
        local_244 = local_res14;
        iVar6 = (**(code **)(*param_2 + 8))(param_2,0x205,local_240,local_res18);
        if (iVar6 != 0) {
          return 0;
        }
        if (local_248 != 0x45474544) {
          return 0;
        }
        if (local_244 != 0x283) {
          return 0;
        }
        FUN_1800d310c(param_1,local_240);
      }
      else if (iVar6 == 0x20c) {
        FUN_1800cf19c(&local_248);
        local_248 = local_res10;
        local_244 = local_res14;
        iVar6 = (**(code **)(*param_2 + 8))(param_2,0x204,local_240,local_res18);
        if (iVar6 != 0) {
          return 0;
        }
        if (local_248 != 0x45474544) {
          return 0;
        }
        if (local_244 != 0x282) {
          return 0;
        }
        FUN_1800d356c(param_1,local_240);
      }
      else if (iVar6 == 0x209) {
        FUN_1800cf360(&local_248);
        local_248 = local_res10;
        local_244 = local_res14;
        iVar6 = (**(code **)(*param_2 + 8))(param_2,0x201,local_240,local_res18);
        if (iVar6 != 0) {
          return 0;
        }
        if (local_248 != 0x45474544) {
          return 0;
        }
        if (local_244 != 0x281) {
          return 0;
        }
        FUN_1800d39c0(param_1,local_240);
      }
      else if (iVar6 == 0x200) {
        FUN_1800cf51c(&local_248);
        local_248 = local_res10;
        local_244 = local_res14;
        iVar6 = (**(code **)(*param_2 + 8))(param_2,0x1f8,local_240,local_res18);
        if (iVar6 != 0) {
          return 0;
        }
        if (local_248 != 0x45474544) {
          return 0;
        }
        if (local_244 != 0x280) {
          return 0;
        }
        FUN_1800d3e10(param_1,local_240);
      }
      else if (iVar6 == 0x1fd) {
        FUN_1800cf6d8(&local_248);
        local_248 = local_res10;
        local_244 = local_res14;
        iVar6 = (**(code **)(*param_2 + 8))(param_2,0x1f5,local_240,local_res18);
        if (iVar6 != 0) {
          return 0;
        }
        if (local_248 != 0x45474544) {
          return 0;
        }
        if (local_244 != 0x279) {
          return 0;
        }
        FUN_1800d4258(param_1,local_240);
      }
      else if (iVar6 == 0x1f6) {
        local_248 = 0x45474544;
        local_244 = 0x287;
        FUN_1800c9fcc((undefined8 *)local_240);
        local_248 = local_res10;
        local_244 = local_res14;
        iVar6 = (**(code **)(*param_2 + 8))(param_2,0x1ee,local_240,local_res18);
        if (iVar6 != 0) {
          return 0;
        }
        if (local_248 != 0x45474544) {
          return 0;
        }
        if (local_244 == 0x276) {
          FUN_1800d46a8(param_1,local_240);
        }
        else {
          if (1 < local_244 - 0x277U) {
            return 0;
          }
          FUN_1800d46a8(param_1,local_240);
        }
      }
      else if (iVar6 == 0x1f0) {
        FUN_1800cf88c(&local_248);
        local_248 = local_res10;
        local_244 = local_res14;
        iVar6 = (**(code **)(*param_2 + 8))(param_2,0x1e8,local_240,local_res18);
        if (iVar6 != 0) {
          return 0;
        }
        if (local_248 != 0x45474544) {
          return 0;
        }
        if (local_244 != 0x275) {
          return 0;
        }
        FUN_1800d4af4(param_1,local_240);
      }
      else if (iVar6 == 0x1ec) {
        FUN_1800cfa38(&local_248);
        local_248 = local_res10;
        local_244 = local_res14;
        iVar6 = (**(code **)(*param_2 + 8))(param_2,0x1e4,local_240,local_res18);
        if (iVar6 != 0) {
          return 0;
        }
        if (local_248 != 0x45474544) {
          return 0;
        }
        if (local_244 != 0x274) {
          return 0;
        }
        FUN_1800d4f34(param_1,local_240);
      }
      else if (iVar6 == 0x1e0) {
        FUN_1800cfbe0(&local_248);
        local_248 = local_res10;
        local_244 = local_res14;
        iVar6 = (**(code **)(*param_2 + 8))(param_2,0x1d8,local_240,local_res18);
        if (iVar6 != 0) {
          return 0;
        }
        if (local_248 != 0x45474544) {
          return 0;
        }
        if (local_244 != 0x273) {
          return 0;
        }
        FUN_1800d5370(param_1,local_240);
      }
      else if (iVar6 == 0x1dc) {
        if (local_res10 != 0x45474544) {
          return 0;
        }
        if (local_res14 == 0x270) {
          FUN_1800cfd80(&local_248);
          local_248 = local_res10;
          local_244 = local_res14;
          iVar6 = (**(code **)(*param_2 + 8))(param_2,0x1d4,local_240,local_res18);
          if (iVar6 != 0) {
            return 0;
          }
          FUN_1800d5798(param_1,local_240);
        }
        else {
          if (local_res14 != 0x263) {
            return 0;
          }
          FUN_1800cff20(&local_248);
          local_248 = local_res10;
          local_244 = local_res14;
          iVar6 = (**(code **)(*param_2 + 8))(param_2,0x1d4,local_240,local_res18);
          if (iVar6 != 0) {
            return 0;
          }
          FUN_1800d5bbc(param_1,local_240);
        }
      }
      else if (iVar6 == 0x1d6) {
        FUN_1800d00bc(&local_248);
        local_248 = local_res10;
        local_244 = local_res14;
        iVar6 = (**(code **)(*param_2 + 8))(param_2,0x1ce,local_240,local_res18);
        if (iVar6 != 0) {
          return 0;
        }
        if (local_248 != 0x45474544) {
          return 0;
        }
        if (local_244 != 0x262) {
          return 0;
        }
        FUN_1800d5fe8(param_1,local_240);
      }
      else if (iVar6 == 0x1c6) {
        if (local_res10 != 0x45474544) {
          return 0;
        }
        if (local_res14 == 0x261) {
          FUN_1800d0258(&local_248);
          local_248 = local_res10;
          local_244 = local_res14;
          iVar6 = (**(code **)(*param_2 + 8))(param_2,0x1be,local_240,local_res18);
          if (iVar6 != 0) {
            return 0;
          }
          FUN_1800d640c(param_1,local_240);
        }
        else {
          if (local_res14 != 0x260) {
            return 0;
          }
          FUN_1800d03e4(&local_248);
          local_248 = local_res10;
          local_244 = local_res14;
          iVar6 = (**(code **)(*param_2 + 8))(param_2,0x1bd,local_240,local_res18);
          if (iVar6 != 0) {
            return 0;
          }
          FUN_1800d6810(param_1,local_240);
        }
      }
      else if (iVar6 == 0x1b3) {
        local_248 = local_res10;
        local_244 = local_res14;
        iVar6 = (**(code **)(*param_2 + 8))(param_2,0x1ab,local_240,local_res18);
        if (iVar6 != 0) {
          return 0;
        }
        if (local_248 != 0x45474544) {
          return 0;
        }
        if (local_244 != 0x255) {
          return 0;
        }
        FUN_1800d6c0c(param_1,local_240);
      }
      else if (iVar6 == 0x1af) {
        FUN_1800d0560(&local_248);
        local_248 = local_res10;
        local_244 = local_res14;
        iVar6 = (**(code **)(*param_2 + 8))(param_2,0x1a7,local_240,local_res18);
        if (iVar6 != 0) {
          return 0;
        }
        if (local_248 != 0x45474544) {
          return 0;
        }
        if (local_244 != 0x255) {
          return 0;
        }
        FUN_1800d6fd4(param_1,local_240);
      }
      else if (iVar6 == 0x1ac) {
        FUN_1800d06b8(&local_248);
        local_248 = local_res10;
        local_244 = local_res14;
        iVar6 = (**(code **)(*param_2 + 8))(param_2,0x1a4,local_240,local_res18);
        if (iVar6 != 0) {
          return 0;
        }
        if (local_248 != 0x45474544) {
          return 0;
        }
        if (local_244 != 0x255) {
          return 0;
        }
        FUN_1800d739c(param_1,local_240);
      }
      else if (iVar6 == 0x141) {
        local_248 = local_res10;
        local_244 = local_res14;
        iVar6 = (**(code **)(*param_2 + 8))(param_2,0x139,local_240,local_res18);
        if (iVar6 != 0) {
          return 0;
        }
        if (local_248 != 0x45474544) {
          return 0;
        }
        if (local_244 != 0x255) {
          return 0;
        }
        FUN_1800d7768(param_1,local_240);
      }
      else if (iVar6 == 0x8a) {
        local_248 = local_res10;
        local_244 = local_res14;
        iVar6 = (**(code **)(*param_2 + 8))(param_2,0x82,local_240,local_res18);
        if (iVar6 != 0) {
          return 0;
        }
        if (local_248 != 0x45474544) {
          return 0;
        }
        if (local_244 != 0x254) {
          return 0;
        }
        FUN_1800d7b30((undefined8 *)param_1,local_240);
      }
      else if (iVar6 == 0x80) {
        local_248 = local_res10;
        local_244 = local_res14;
        iVar6 = (**(code **)(*param_2 + 8))(param_2,0x78,local_240,local_res18);
        if (iVar6 != 0) {
          return 0;
        }
        if (local_248 != 0x45474544) {
          return 0;
        }
        if (local_244 != 0x253) {
          return 0;
        }
        FUN_1800d7d50((undefined8 *)param_1,local_240);
      }
      else {
        if (iVar6 != 0x7f) {
          return 0;
        }
        local_248 = local_res10;
        local_244 = local_res14;
        iVar6 = (**(code **)(*param_2 + 8))(param_2,0x77,local_240,local_res18);
        if (iVar6 != 0) {
          return 0;
        }
        if (local_248 != 0x45474544) {
          return 0;
        }
        if (1 < local_244 - 0x251U) {
          return 0;
        }
        FUN_1800d7f7c((undefined8 *)param_1,local_240);
      }
      uVar11 = 1;
    }
  }
  return uVar11;
}

