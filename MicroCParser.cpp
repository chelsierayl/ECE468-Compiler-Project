
 


// Generated from MicroC.g4 by ANTLR 4.13.2


#include "MicroCListener.h"

#include "MicroCParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct MicroCParserStaticData final {
  MicroCParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  MicroCParserStaticData(const MicroCParserStaticData&) = delete;
  MicroCParserStaticData(MicroCParserStaticData&&) = delete;
  MicroCParserStaticData& operator=(const MicroCParserStaticData&) = delete;
  MicroCParserStaticData& operator=(MicroCParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag microcParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<MicroCParserStaticData> microcParserStaticData = nullptr;

void microcParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (microcParserStaticData != nullptr) {
    return;
  }
#else
  assert(microcParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<MicroCParserStaticData>(
    std::vector<std::string>{
      "program", "decls", "var_decls", "ident", "var_decl", "str_decl", 
      "base_type", "function", "statements", "statement", "base_stmt", "read_stmt", 
      "print_stmt", "return_stmt", "assign_stmt", "if_stmt", "while_stmt", 
      "primary", "unaryminus_expr", "expr", "term", "cond", "cmpop", "mulop", 
      "addop"
    },
    std::vector<std::string>{
      "", "';'", "'string'", "'='", "'int'", "'float'", "'main'", "'('", 
      "')'", "'{'", "'}'", "'read'", "'print'", "'return'", "'if'", "'else'", 
      "'while'", "'-'", "'<'", "'<='", "'>='", "'=='", "'!='", "'>'", "'*'", 
      "'/'", "'+'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "IDENTIFIER", "INT_LITERAL", 
      "FLOAT_LITERAL", "STR_LITERAL", "COMMENT", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,32,204,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,3,1,61,8,1,1,2,1,2,1,2,1,2,3,2,67,8,2,1,3,1,3,1,4,1,4,1,4,1,4,1,5,
  	1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,8,1,8,1,
  	8,1,8,3,8,95,8,8,1,9,1,9,1,9,1,9,1,9,3,9,102,8,9,1,10,1,10,1,10,1,10,
  	3,10,108,8,10,1,11,1,11,1,11,1,11,1,11,1,12,1,12,1,12,1,12,1,12,1,13,
  	1,13,1,13,1,14,1,14,1,14,1,14,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,
  	1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,3,15,147,
  	8,15,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,17,1,17,1,17,1,17,1,17,
  	1,17,1,17,1,17,3,17,165,8,17,1,18,1,18,1,18,1,19,1,19,1,19,1,19,1,19,
  	1,19,1,19,5,19,177,8,19,10,19,12,19,180,9,19,1,20,1,20,1,20,1,20,1,20,
  	1,20,1,20,5,20,189,8,20,10,20,12,20,192,9,20,1,21,1,21,1,21,1,21,1,22,
  	1,22,1,23,1,23,1,24,1,24,1,24,0,2,38,40,25,0,2,4,6,8,10,12,14,16,18,20,
  	22,24,26,28,30,32,34,36,38,40,42,44,46,48,0,4,1,0,4,5,1,0,18,23,1,0,24,
  	25,2,0,17,17,26,26,194,0,50,1,0,0,0,2,60,1,0,0,0,4,66,1,0,0,0,6,68,1,
  	0,0,0,8,70,1,0,0,0,10,74,1,0,0,0,12,80,1,0,0,0,14,82,1,0,0,0,16,94,1,
  	0,0,0,18,101,1,0,0,0,20,107,1,0,0,0,22,109,1,0,0,0,24,114,1,0,0,0,26,
  	119,1,0,0,0,28,122,1,0,0,0,30,146,1,0,0,0,32,148,1,0,0,0,34,164,1,0,0,
  	0,36,166,1,0,0,0,38,169,1,0,0,0,40,181,1,0,0,0,42,193,1,0,0,0,44,197,
  	1,0,0,0,46,199,1,0,0,0,48,201,1,0,0,0,50,51,3,2,1,0,51,52,3,14,7,0,52,
  	1,1,0,0,0,53,54,3,8,4,0,54,55,3,2,1,0,55,61,1,0,0,0,56,57,3,10,5,0,57,
  	58,3,2,1,0,58,61,1,0,0,0,59,61,1,0,0,0,60,53,1,0,0,0,60,56,1,0,0,0,60,
  	59,1,0,0,0,61,3,1,0,0,0,62,63,3,8,4,0,63,64,3,4,2,0,64,67,1,0,0,0,65,
  	67,1,0,0,0,66,62,1,0,0,0,66,65,1,0,0,0,67,5,1,0,0,0,68,69,5,27,0,0,69,
  	7,1,0,0,0,70,71,3,12,6,0,71,72,3,6,3,0,72,73,5,1,0,0,73,9,1,0,0,0,74,
  	75,5,2,0,0,75,76,3,6,3,0,76,77,5,3,0,0,77,78,5,30,0,0,78,79,5,1,0,0,79,
  	11,1,0,0,0,80,81,7,0,0,0,81,13,1,0,0,0,82,83,5,4,0,0,83,84,5,6,0,0,84,
  	85,5,7,0,0,85,86,5,8,0,0,86,87,5,9,0,0,87,88,3,16,8,0,88,89,5,10,0,0,
  	89,15,1,0,0,0,90,91,3,18,9,0,91,92,3,16,8,0,92,95,1,0,0,0,93,95,1,0,0,
  	0,94,90,1,0,0,0,94,93,1,0,0,0,95,17,1,0,0,0,96,97,3,20,10,0,97,98,5,1,
  	0,0,98,102,1,0,0,0,99,102,3,30,15,0,100,102,3,32,16,0,101,96,1,0,0,0,
  	101,99,1,0,0,0,101,100,1,0,0,0,102,19,1,0,0,0,103,108,3,28,14,0,104,108,
  	3,22,11,0,105,108,3,24,12,0,106,108,3,26,13,0,107,103,1,0,0,0,107,104,
  	1,0,0,0,107,105,1,0,0,0,107,106,1,0,0,0,108,21,1,0,0,0,109,110,5,11,0,
  	0,110,111,5,7,0,0,111,112,3,6,3,0,112,113,5,8,0,0,113,23,1,0,0,0,114,
  	115,5,12,0,0,115,116,5,7,0,0,116,117,3,38,19,0,117,118,5,8,0,0,118,25,
  	1,0,0,0,119,120,5,13,0,0,120,121,3,38,19,0,121,27,1,0,0,0,122,123,3,6,
  	3,0,123,124,5,3,0,0,124,125,3,38,19,0,125,29,1,0,0,0,126,127,5,14,0,0,
  	127,128,5,7,0,0,128,129,3,42,21,0,129,130,5,8,0,0,130,131,5,9,0,0,131,
  	132,3,16,8,0,132,133,5,10,0,0,133,147,1,0,0,0,134,135,5,14,0,0,135,136,
  	5,7,0,0,136,137,3,42,21,0,137,138,5,8,0,0,138,139,5,9,0,0,139,140,3,16,
  	8,0,140,141,5,10,0,0,141,142,5,15,0,0,142,143,5,9,0,0,143,144,3,16,8,
  	0,144,145,5,10,0,0,145,147,1,0,0,0,146,126,1,0,0,0,146,134,1,0,0,0,147,
  	31,1,0,0,0,148,149,5,16,0,0,149,150,5,7,0,0,150,151,3,42,21,0,151,152,
  	5,8,0,0,152,153,5,9,0,0,153,154,3,16,8,0,154,155,5,10,0,0,155,33,1,0,
  	0,0,156,165,3,6,3,0,157,158,5,7,0,0,158,159,3,38,19,0,159,160,5,8,0,0,
  	160,165,1,0,0,0,161,165,3,36,18,0,162,165,5,28,0,0,163,165,5,29,0,0,164,
  	156,1,0,0,0,164,157,1,0,0,0,164,161,1,0,0,0,164,162,1,0,0,0,164,163,1,
  	0,0,0,165,35,1,0,0,0,166,167,5,17,0,0,167,168,3,38,19,0,168,37,1,0,0,
  	0,169,170,6,19,-1,0,170,171,3,40,20,0,171,178,1,0,0,0,172,173,10,1,0,
  	0,173,174,3,48,24,0,174,175,3,40,20,0,175,177,1,0,0,0,176,172,1,0,0,0,
  	177,180,1,0,0,0,178,176,1,0,0,0,178,179,1,0,0,0,179,39,1,0,0,0,180,178,
  	1,0,0,0,181,182,6,20,-1,0,182,183,3,34,17,0,183,190,1,0,0,0,184,185,10,
  	1,0,0,185,186,3,46,23,0,186,187,3,34,17,0,187,189,1,0,0,0,188,184,1,0,
  	0,0,189,192,1,0,0,0,190,188,1,0,0,0,190,191,1,0,0,0,191,41,1,0,0,0,192,
  	190,1,0,0,0,193,194,3,38,19,0,194,195,3,44,22,0,195,196,3,38,19,0,196,
  	43,1,0,0,0,197,198,7,1,0,0,198,45,1,0,0,0,199,200,7,2,0,0,200,47,1,0,
  	0,0,201,202,7,3,0,0,202,49,1,0,0,0,9,60,66,94,101,107,146,164,178,190
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  microcParserStaticData = std::move(staticData);
}

}

MicroCParser::MicroCParser(TokenStream *input) : MicroCParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

MicroCParser::MicroCParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  MicroCParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *microcParserStaticData->atn, microcParserStaticData->decisionToDFA, microcParserStaticData->sharedContextCache, options);
}

MicroCParser::~MicroCParser() {
  delete _interpreter;
}

const atn::ATN& MicroCParser::getATN() const {
  return *microcParserStaticData->atn;
}

std::string MicroCParser::getGrammarFileName() const {
  return "MicroC.g4";
}

const std::vector<std::string>& MicroCParser::getRuleNames() const {
  return microcParserStaticData->ruleNames;
}

const dfa::Vocabulary& MicroCParser::getVocabulary() const {
  return microcParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView MicroCParser::getSerializedATN() const {
  return microcParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

MicroCParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MicroCParser::DeclsContext* MicroCParser::ProgramContext::decls() {
  return getRuleContext<MicroCParser::DeclsContext>(0);
}

MicroCParser::FunctionContext* MicroCParser::ProgramContext::function() {
  return getRuleContext<MicroCParser::FunctionContext>(0);
}


size_t MicroCParser::ProgramContext::getRuleIndex() const {
  return MicroCParser::RuleProgram;
}

void MicroCParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MicroCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void MicroCParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MicroCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}

MicroCParser::ProgramContext* MicroCParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, MicroCParser::RuleProgram);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(50);
    decls();
    setState(51);
    function();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclsContext ------------------------------------------------------------------

MicroCParser::DeclsContext::DeclsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MicroCParser::Var_declContext* MicroCParser::DeclsContext::var_decl() {
  return getRuleContext<MicroCParser::Var_declContext>(0);
}

MicroCParser::DeclsContext* MicroCParser::DeclsContext::decls() {
  return getRuleContext<MicroCParser::DeclsContext>(0);
}

MicroCParser::Str_declContext* MicroCParser::DeclsContext::str_decl() {
  return getRuleContext<MicroCParser::Str_declContext>(0);
}


size_t MicroCParser::DeclsContext::getRuleIndex() const {
  return MicroCParser::RuleDecls;
}

void MicroCParser::DeclsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MicroCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecls(this);
}

void MicroCParser::DeclsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MicroCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecls(this);
}

MicroCParser::DeclsContext* MicroCParser::decls() {
  DeclsContext *_localctx = _tracker.createInstance<DeclsContext>(_ctx, getState());
  enterRule(_localctx, 2, MicroCParser::RuleDecls);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(60);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(53);
      var_decl();
      setState(54);
      decls();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(56);
      str_decl();
      setState(57);
      decls();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);

      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Var_declsContext ------------------------------------------------------------------

MicroCParser::Var_declsContext::Var_declsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MicroCParser::Var_declContext* MicroCParser::Var_declsContext::var_decl() {
  return getRuleContext<MicroCParser::Var_declContext>(0);
}

MicroCParser::Var_declsContext* MicroCParser::Var_declsContext::var_decls() {
  return getRuleContext<MicroCParser::Var_declsContext>(0);
}


size_t MicroCParser::Var_declsContext::getRuleIndex() const {
  return MicroCParser::RuleVar_decls;
}

void MicroCParser::Var_declsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MicroCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVar_decls(this);
}

void MicroCParser::Var_declsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MicroCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVar_decls(this);
}

MicroCParser::Var_declsContext* MicroCParser::var_decls() {
  Var_declsContext *_localctx = _tracker.createInstance<Var_declsContext>(_ctx, getState());
  enterRule(_localctx, 4, MicroCParser::RuleVar_decls);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(66);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(62);
      var_decl();
      setState(63);
      var_decls();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);

      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentContext ------------------------------------------------------------------

MicroCParser::IdentContext::IdentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MicroCParser::IdentContext::IDENTIFIER() {
  return getToken(MicroCParser::IDENTIFIER, 0);
}


size_t MicroCParser::IdentContext::getRuleIndex() const {
  return MicroCParser::RuleIdent;
}

void MicroCParser::IdentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MicroCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdent(this);
}

void MicroCParser::IdentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MicroCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdent(this);
}

MicroCParser::IdentContext* MicroCParser::ident() {
  IdentContext *_localctx = _tracker.createInstance<IdentContext>(_ctx, getState());
  enterRule(_localctx, 6, MicroCParser::RuleIdent);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(68);
    match(MicroCParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Var_declContext ------------------------------------------------------------------

MicroCParser::Var_declContext::Var_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MicroCParser::Base_typeContext* MicroCParser::Var_declContext::base_type() {
  return getRuleContext<MicroCParser::Base_typeContext>(0);
}

MicroCParser::IdentContext* MicroCParser::Var_declContext::ident() {
  return getRuleContext<MicroCParser::IdentContext>(0);
}


size_t MicroCParser::Var_declContext::getRuleIndex() const {
  return MicroCParser::RuleVar_decl;
}

void MicroCParser::Var_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MicroCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVar_decl(this);
}

void MicroCParser::Var_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MicroCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVar_decl(this);
}

MicroCParser::Var_declContext* MicroCParser::var_decl() {
  Var_declContext *_localctx = _tracker.createInstance<Var_declContext>(_ctx, getState());
  enterRule(_localctx, 8, MicroCParser::RuleVar_decl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(70);
    base_type();
    setState(71);
    ident();
    setState(72);
    match(MicroCParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Str_declContext ------------------------------------------------------------------

MicroCParser::Str_declContext::Str_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MicroCParser::IdentContext* MicroCParser::Str_declContext::ident() {
  return getRuleContext<MicroCParser::IdentContext>(0);
}

tree::TerminalNode* MicroCParser::Str_declContext::STR_LITERAL() {
  return getToken(MicroCParser::STR_LITERAL, 0);
}


size_t MicroCParser::Str_declContext::getRuleIndex() const {
  return MicroCParser::RuleStr_decl;
}

void MicroCParser::Str_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MicroCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStr_decl(this);
}

void MicroCParser::Str_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MicroCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStr_decl(this);
}

MicroCParser::Str_declContext* MicroCParser::str_decl() {
  Str_declContext *_localctx = _tracker.createInstance<Str_declContext>(_ctx, getState());
  enterRule(_localctx, 10, MicroCParser::RuleStr_decl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(74);
    match(MicroCParser::T__1);
    setState(75);
    ident();
    setState(76);
    match(MicroCParser::T__2);
    setState(77);
    match(MicroCParser::STR_LITERAL);
    setState(78);
    match(MicroCParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Base_typeContext ------------------------------------------------------------------

MicroCParser::Base_typeContext::Base_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MicroCParser::Base_typeContext::getRuleIndex() const {
  return MicroCParser::RuleBase_type;
}

void MicroCParser::Base_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MicroCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBase_type(this);
}

void MicroCParser::Base_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MicroCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBase_type(this);
}

MicroCParser::Base_typeContext* MicroCParser::base_type() {
  Base_typeContext *_localctx = _tracker.createInstance<Base_typeContext>(_ctx, getState());
  enterRule(_localctx, 12, MicroCParser::RuleBase_type);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(80);
    _la = _input->LA(1);
    if (!(_la == MicroCParser::T__3

    || _la == MicroCParser::T__4)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionContext ------------------------------------------------------------------

MicroCParser::FunctionContext::FunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MicroCParser::StatementsContext* MicroCParser::FunctionContext::statements() {
  return getRuleContext<MicroCParser::StatementsContext>(0);
}


size_t MicroCParser::FunctionContext::getRuleIndex() const {
  return MicroCParser::RuleFunction;
}

void MicroCParser::FunctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MicroCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction(this);
}

void MicroCParser::FunctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MicroCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction(this);
}

MicroCParser::FunctionContext* MicroCParser::function() {
  FunctionContext *_localctx = _tracker.createInstance<FunctionContext>(_ctx, getState());
  enterRule(_localctx, 14, MicroCParser::RuleFunction);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(82);
    match(MicroCParser::T__3);
    setState(83);
    match(MicroCParser::T__5);
    setState(84);
    match(MicroCParser::T__6);
    setState(85);
    match(MicroCParser::T__7);
    setState(86);
    match(MicroCParser::T__8);
    setState(87);
    statements();
    setState(88);
    match(MicroCParser::T__9);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementsContext ------------------------------------------------------------------

MicroCParser::StatementsContext::StatementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MicroCParser::StatementContext* MicroCParser::StatementsContext::statement() {
  return getRuleContext<MicroCParser::StatementContext>(0);
}

MicroCParser::StatementsContext* MicroCParser::StatementsContext::statements() {
  return getRuleContext<MicroCParser::StatementsContext>(0);
}


size_t MicroCParser::StatementsContext::getRuleIndex() const {
  return MicroCParser::RuleStatements;
}

void MicroCParser::StatementsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MicroCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatements(this);
}

void MicroCParser::StatementsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MicroCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatements(this);
}

MicroCParser::StatementsContext* MicroCParser::statements() {
  StatementsContext *_localctx = _tracker.createInstance<StatementsContext>(_ctx, getState());
  enterRule(_localctx, 16, MicroCParser::RuleStatements);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(94);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MicroCParser::T__10:
      case MicroCParser::T__11:
      case MicroCParser::T__12:
      case MicroCParser::T__13:
      case MicroCParser::T__15:
      case MicroCParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(90);
        statement();
        setState(91);
        statements();
        break;
      }

      case MicroCParser::T__9: {
        enterOuterAlt(_localctx, 2);

        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

MicroCParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MicroCParser::Base_stmtContext* MicroCParser::StatementContext::base_stmt() {
  return getRuleContext<MicroCParser::Base_stmtContext>(0);
}

MicroCParser::If_stmtContext* MicroCParser::StatementContext::if_stmt() {
  return getRuleContext<MicroCParser::If_stmtContext>(0);
}

MicroCParser::While_stmtContext* MicroCParser::StatementContext::while_stmt() {
  return getRuleContext<MicroCParser::While_stmtContext>(0);
}


size_t MicroCParser::StatementContext::getRuleIndex() const {
  return MicroCParser::RuleStatement;
}

void MicroCParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MicroCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void MicroCParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MicroCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}

MicroCParser::StatementContext* MicroCParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 18, MicroCParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(101);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MicroCParser::T__10:
      case MicroCParser::T__11:
      case MicroCParser::T__12:
      case MicroCParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(96);
        base_stmt();
        setState(97);
        match(MicroCParser::T__0);
        break;
      }

      case MicroCParser::T__13: {
        enterOuterAlt(_localctx, 2);
        setState(99);
        if_stmt();
        break;
      }

      case MicroCParser::T__15: {
        enterOuterAlt(_localctx, 3);
        setState(100);
        while_stmt();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Base_stmtContext ------------------------------------------------------------------

MicroCParser::Base_stmtContext::Base_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MicroCParser::Assign_stmtContext* MicroCParser::Base_stmtContext::assign_stmt() {
  return getRuleContext<MicroCParser::Assign_stmtContext>(0);
}

MicroCParser::Read_stmtContext* MicroCParser::Base_stmtContext::read_stmt() {
  return getRuleContext<MicroCParser::Read_stmtContext>(0);
}

MicroCParser::Print_stmtContext* MicroCParser::Base_stmtContext::print_stmt() {
  return getRuleContext<MicroCParser::Print_stmtContext>(0);
}

MicroCParser::Return_stmtContext* MicroCParser::Base_stmtContext::return_stmt() {
  return getRuleContext<MicroCParser::Return_stmtContext>(0);
}


size_t MicroCParser::Base_stmtContext::getRuleIndex() const {
  return MicroCParser::RuleBase_stmt;
}

void MicroCParser::Base_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MicroCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBase_stmt(this);
}

void MicroCParser::Base_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MicroCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBase_stmt(this);
}

MicroCParser::Base_stmtContext* MicroCParser::base_stmt() {
  Base_stmtContext *_localctx = _tracker.createInstance<Base_stmtContext>(_ctx, getState());
  enterRule(_localctx, 20, MicroCParser::RuleBase_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(107);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MicroCParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(103);
        assign_stmt();
        break;
      }

      case MicroCParser::T__10: {
        enterOuterAlt(_localctx, 2);
        setState(104);
        read_stmt();
        break;
      }

      case MicroCParser::T__11: {
        enterOuterAlt(_localctx, 3);
        setState(105);
        print_stmt();
        break;
      }

      case MicroCParser::T__12: {
        enterOuterAlt(_localctx, 4);
        setState(106);
        return_stmt();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Read_stmtContext ------------------------------------------------------------------

MicroCParser::Read_stmtContext::Read_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MicroCParser::IdentContext* MicroCParser::Read_stmtContext::ident() {
  return getRuleContext<MicroCParser::IdentContext>(0);
}


size_t MicroCParser::Read_stmtContext::getRuleIndex() const {
  return MicroCParser::RuleRead_stmt;
}

void MicroCParser::Read_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MicroCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRead_stmt(this);
}

void MicroCParser::Read_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MicroCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRead_stmt(this);
}

MicroCParser::Read_stmtContext* MicroCParser::read_stmt() {
  Read_stmtContext *_localctx = _tracker.createInstance<Read_stmtContext>(_ctx, getState());
  enterRule(_localctx, 22, MicroCParser::RuleRead_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(109);
    match(MicroCParser::T__10);
    setState(110);
    match(MicroCParser::T__6);
    setState(111);
    ident();
    setState(112);
    match(MicroCParser::T__7);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Print_stmtContext ------------------------------------------------------------------

MicroCParser::Print_stmtContext::Print_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MicroCParser::ExprContext* MicroCParser::Print_stmtContext::expr() {
  return getRuleContext<MicroCParser::ExprContext>(0);
}


size_t MicroCParser::Print_stmtContext::getRuleIndex() const {
  return MicroCParser::RulePrint_stmt;
}

void MicroCParser::Print_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MicroCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrint_stmt(this);
}

void MicroCParser::Print_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MicroCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrint_stmt(this);
}

MicroCParser::Print_stmtContext* MicroCParser::print_stmt() {
  Print_stmtContext *_localctx = _tracker.createInstance<Print_stmtContext>(_ctx, getState());
  enterRule(_localctx, 24, MicroCParser::RulePrint_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(114);
    match(MicroCParser::T__11);
    setState(115);
    match(MicroCParser::T__6);
    setState(116);
    expr(0);
    setState(117);
    match(MicroCParser::T__7);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Return_stmtContext ------------------------------------------------------------------

MicroCParser::Return_stmtContext::Return_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MicroCParser::ExprContext* MicroCParser::Return_stmtContext::expr() {
  return getRuleContext<MicroCParser::ExprContext>(0);
}


size_t MicroCParser::Return_stmtContext::getRuleIndex() const {
  return MicroCParser::RuleReturn_stmt;
}

void MicroCParser::Return_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MicroCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturn_stmt(this);
}

void MicroCParser::Return_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MicroCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturn_stmt(this);
}

MicroCParser::Return_stmtContext* MicroCParser::return_stmt() {
  Return_stmtContext *_localctx = _tracker.createInstance<Return_stmtContext>(_ctx, getState());
  enterRule(_localctx, 26, MicroCParser::RuleReturn_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(119);
    match(MicroCParser::T__12);
    setState(120);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Assign_stmtContext ------------------------------------------------------------------

MicroCParser::Assign_stmtContext::Assign_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MicroCParser::IdentContext* MicroCParser::Assign_stmtContext::ident() {
  return getRuleContext<MicroCParser::IdentContext>(0);
}

MicroCParser::ExprContext* MicroCParser::Assign_stmtContext::expr() {
  return getRuleContext<MicroCParser::ExprContext>(0);
}


size_t MicroCParser::Assign_stmtContext::getRuleIndex() const {
  return MicroCParser::RuleAssign_stmt;
}

void MicroCParser::Assign_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MicroCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssign_stmt(this);
}

void MicroCParser::Assign_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MicroCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssign_stmt(this);
}

MicroCParser::Assign_stmtContext* MicroCParser::assign_stmt() {
  Assign_stmtContext *_localctx = _tracker.createInstance<Assign_stmtContext>(_ctx, getState());
  enterRule(_localctx, 28, MicroCParser::RuleAssign_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(122);
    ident();
    setState(123);
    match(MicroCParser::T__2);
    setState(124);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_stmtContext ------------------------------------------------------------------

MicroCParser::If_stmtContext::If_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MicroCParser::CondContext* MicroCParser::If_stmtContext::cond() {
  return getRuleContext<MicroCParser::CondContext>(0);
}

std::vector<MicroCParser::StatementsContext *> MicroCParser::If_stmtContext::statements() {
  return getRuleContexts<MicroCParser::StatementsContext>();
}

MicroCParser::StatementsContext* MicroCParser::If_stmtContext::statements(size_t i) {
  return getRuleContext<MicroCParser::StatementsContext>(i);
}


size_t MicroCParser::If_stmtContext::getRuleIndex() const {
  return MicroCParser::RuleIf_stmt;
}

void MicroCParser::If_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MicroCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf_stmt(this);
}

void MicroCParser::If_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MicroCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf_stmt(this);
}

MicroCParser::If_stmtContext* MicroCParser::if_stmt() {
  If_stmtContext *_localctx = _tracker.createInstance<If_stmtContext>(_ctx, getState());
  enterRule(_localctx, 30, MicroCParser::RuleIf_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(146);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(126);
      match(MicroCParser::T__13);
      setState(127);
      match(MicroCParser::T__6);
      setState(128);
      cond();
      setState(129);
      match(MicroCParser::T__7);
      setState(130);
      match(MicroCParser::T__8);
      setState(131);
      statements();
      setState(132);
      match(MicroCParser::T__9);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(134);
      match(MicroCParser::T__13);
      setState(135);
      match(MicroCParser::T__6);
      setState(136);
      cond();
      setState(137);
      match(MicroCParser::T__7);
      setState(138);
      match(MicroCParser::T__8);
      setState(139);
      statements();
      setState(140);
      match(MicroCParser::T__9);
      setState(141);
      match(MicroCParser::T__14);
      setState(142);
      match(MicroCParser::T__8);
      setState(143);
      statements();
      setState(144);
      match(MicroCParser::T__9);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- While_stmtContext ------------------------------------------------------------------

MicroCParser::While_stmtContext::While_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MicroCParser::CondContext* MicroCParser::While_stmtContext::cond() {
  return getRuleContext<MicroCParser::CondContext>(0);
}

MicroCParser::StatementsContext* MicroCParser::While_stmtContext::statements() {
  return getRuleContext<MicroCParser::StatementsContext>(0);
}


size_t MicroCParser::While_stmtContext::getRuleIndex() const {
  return MicroCParser::RuleWhile_stmt;
}

void MicroCParser::While_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MicroCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhile_stmt(this);
}

void MicroCParser::While_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MicroCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhile_stmt(this);
}

MicroCParser::While_stmtContext* MicroCParser::while_stmt() {
  While_stmtContext *_localctx = _tracker.createInstance<While_stmtContext>(_ctx, getState());
  enterRule(_localctx, 32, MicroCParser::RuleWhile_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(148);
    match(MicroCParser::T__15);
    setState(149);
    match(MicroCParser::T__6);
    setState(150);
    cond();
    setState(151);
    match(MicroCParser::T__7);
    setState(152);
    match(MicroCParser::T__8);
    setState(153);
    statements();
    setState(154);
    match(MicroCParser::T__9);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryContext ------------------------------------------------------------------

MicroCParser::PrimaryContext::PrimaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MicroCParser::IdentContext* MicroCParser::PrimaryContext::ident() {
  return getRuleContext<MicroCParser::IdentContext>(0);
}

MicroCParser::ExprContext* MicroCParser::PrimaryContext::expr() {
  return getRuleContext<MicroCParser::ExprContext>(0);
}

MicroCParser::Unaryminus_exprContext* MicroCParser::PrimaryContext::unaryminus_expr() {
  return getRuleContext<MicroCParser::Unaryminus_exprContext>(0);
}

tree::TerminalNode* MicroCParser::PrimaryContext::INT_LITERAL() {
  return getToken(MicroCParser::INT_LITERAL, 0);
}

tree::TerminalNode* MicroCParser::PrimaryContext::FLOAT_LITERAL() {
  return getToken(MicroCParser::FLOAT_LITERAL, 0);
}


size_t MicroCParser::PrimaryContext::getRuleIndex() const {
  return MicroCParser::RulePrimary;
}

void MicroCParser::PrimaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MicroCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimary(this);
}

void MicroCParser::PrimaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MicroCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimary(this);
}

MicroCParser::PrimaryContext* MicroCParser::primary() {
  PrimaryContext *_localctx = _tracker.createInstance<PrimaryContext>(_ctx, getState());
  enterRule(_localctx, 34, MicroCParser::RulePrimary);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(164);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MicroCParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(156);
        ident();
        break;
      }

      case MicroCParser::T__6: {
        enterOuterAlt(_localctx, 2);
        setState(157);
        match(MicroCParser::T__6);
        setState(158);
        expr(0);
        setState(159);
        match(MicroCParser::T__7);
        break;
      }

      case MicroCParser::T__16: {
        enterOuterAlt(_localctx, 3);
        setState(161);
        unaryminus_expr();
        break;
      }

      case MicroCParser::INT_LITERAL: {
        enterOuterAlt(_localctx, 4);
        setState(162);
        match(MicroCParser::INT_LITERAL);
        break;
      }

      case MicroCParser::FLOAT_LITERAL: {
        enterOuterAlt(_localctx, 5);
        setState(163);
        match(MicroCParser::FLOAT_LITERAL);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Unaryminus_exprContext ------------------------------------------------------------------

MicroCParser::Unaryminus_exprContext::Unaryminus_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MicroCParser::ExprContext* MicroCParser::Unaryminus_exprContext::expr() {
  return getRuleContext<MicroCParser::ExprContext>(0);
}


size_t MicroCParser::Unaryminus_exprContext::getRuleIndex() const {
  return MicroCParser::RuleUnaryminus_expr;
}

void MicroCParser::Unaryminus_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MicroCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryminus_expr(this);
}

void MicroCParser::Unaryminus_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MicroCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryminus_expr(this);
}

MicroCParser::Unaryminus_exprContext* MicroCParser::unaryminus_expr() {
  Unaryminus_exprContext *_localctx = _tracker.createInstance<Unaryminus_exprContext>(_ctx, getState());
  enterRule(_localctx, 36, MicroCParser::RuleUnaryminus_expr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(166);
    match(MicroCParser::T__16);
    setState(167);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

MicroCParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MicroCParser::TermContext* MicroCParser::ExprContext::term() {
  return getRuleContext<MicroCParser::TermContext>(0);
}

MicroCParser::ExprContext* MicroCParser::ExprContext::expr() {
  return getRuleContext<MicroCParser::ExprContext>(0);
}

MicroCParser::AddopContext* MicroCParser::ExprContext::addop() {
  return getRuleContext<MicroCParser::AddopContext>(0);
}


size_t MicroCParser::ExprContext::getRuleIndex() const {
  return MicroCParser::RuleExpr;
}

void MicroCParser::ExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MicroCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr(this);
}

void MicroCParser::ExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MicroCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr(this);
}


MicroCParser::ExprContext* MicroCParser::expr() {
   return expr(0);
}

MicroCParser::ExprContext* MicroCParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  MicroCParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  MicroCParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 38;
  enterRecursionRule(_localctx, 38, MicroCParser::RuleExpr, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(170);
    term(0);
    _ctx->stop = _input->LT(-1);
    setState(178);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleExpr);
        setState(172);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(173);
        addop();
        setState(174);
        term(0); 
      }
      setState(180);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- TermContext ------------------------------------------------------------------

MicroCParser::TermContext::TermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MicroCParser::PrimaryContext* MicroCParser::TermContext::primary() {
  return getRuleContext<MicroCParser::PrimaryContext>(0);
}

MicroCParser::TermContext* MicroCParser::TermContext::term() {
  return getRuleContext<MicroCParser::TermContext>(0);
}

MicroCParser::MulopContext* MicroCParser::TermContext::mulop() {
  return getRuleContext<MicroCParser::MulopContext>(0);
}


size_t MicroCParser::TermContext::getRuleIndex() const {
  return MicroCParser::RuleTerm;
}

void MicroCParser::TermContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MicroCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTerm(this);
}

void MicroCParser::TermContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MicroCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTerm(this);
}


MicroCParser::TermContext* MicroCParser::term() {
   return term(0);
}

MicroCParser::TermContext* MicroCParser::term(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  MicroCParser::TermContext *_localctx = _tracker.createInstance<TermContext>(_ctx, parentState);
  MicroCParser::TermContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 40;
  enterRecursionRule(_localctx, 40, MicroCParser::RuleTerm, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(182);
    primary();
    _ctx->stop = _input->LT(-1);
    setState(190);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<TermContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleTerm);
        setState(184);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(185);
        mulop();
        setState(186);
        primary(); 
      }
      setState(192);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- CondContext ------------------------------------------------------------------

MicroCParser::CondContext::CondContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MicroCParser::ExprContext *> MicroCParser::CondContext::expr() {
  return getRuleContexts<MicroCParser::ExprContext>();
}

MicroCParser::ExprContext* MicroCParser::CondContext::expr(size_t i) {
  return getRuleContext<MicroCParser::ExprContext>(i);
}

MicroCParser::CmpopContext* MicroCParser::CondContext::cmpop() {
  return getRuleContext<MicroCParser::CmpopContext>(0);
}


size_t MicroCParser::CondContext::getRuleIndex() const {
  return MicroCParser::RuleCond;
}

void MicroCParser::CondContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MicroCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCond(this);
}

void MicroCParser::CondContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MicroCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCond(this);
}

MicroCParser::CondContext* MicroCParser::cond() {
  CondContext *_localctx = _tracker.createInstance<CondContext>(_ctx, getState());
  enterRule(_localctx, 42, MicroCParser::RuleCond);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(193);
    expr(0);
    setState(194);
    cmpop();
    setState(195);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CmpopContext ------------------------------------------------------------------

MicroCParser::CmpopContext::CmpopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MicroCParser::CmpopContext::getRuleIndex() const {
  return MicroCParser::RuleCmpop;
}

void MicroCParser::CmpopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MicroCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCmpop(this);
}

void MicroCParser::CmpopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MicroCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCmpop(this);
}

MicroCParser::CmpopContext* MicroCParser::cmpop() {
  CmpopContext *_localctx = _tracker.createInstance<CmpopContext>(_ctx, getState());
  enterRule(_localctx, 44, MicroCParser::RuleCmpop);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(197);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 16515072) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MulopContext ------------------------------------------------------------------

MicroCParser::MulopContext::MulopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MicroCParser::MulopContext::getRuleIndex() const {
  return MicroCParser::RuleMulop;
}

void MicroCParser::MulopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MicroCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMulop(this);
}

void MicroCParser::MulopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MicroCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMulop(this);
}

MicroCParser::MulopContext* MicroCParser::mulop() {
  MulopContext *_localctx = _tracker.createInstance<MulopContext>(_ctx, getState());
  enterRule(_localctx, 46, MicroCParser::RuleMulop);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(199);
    _la = _input->LA(1);
    if (!(_la == MicroCParser::T__23

    || _la == MicroCParser::T__24)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddopContext ------------------------------------------------------------------

MicroCParser::AddopContext::AddopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MicroCParser::AddopContext::getRuleIndex() const {
  return MicroCParser::RuleAddop;
}

void MicroCParser::AddopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MicroCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddop(this);
}

void MicroCParser::AddopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MicroCListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddop(this);
}

MicroCParser::AddopContext* MicroCParser::addop() {
  AddopContext *_localctx = _tracker.createInstance<AddopContext>(_ctx, getState());
  enterRule(_localctx, 48, MicroCParser::RuleAddop);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(201);
    _la = _input->LA(1);
    if (!(_la == MicroCParser::T__16

    || _la == MicroCParser::T__25)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool MicroCParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 19: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);
    case 20: return termSempred(antlrcpp::downCast<TermContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool MicroCParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool MicroCParser::termSempred(TermContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

void MicroCParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  microcParserInitialize();
#else
  ::antlr4::internal::call_once(microcParserOnceFlag, microcParserInitialize);
#endif
}
